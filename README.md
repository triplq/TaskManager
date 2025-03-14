# TaskManager

TaskManager – это корпоративное приложение для управления задачами с авторизацией пользователей. Глава организации или его заместители заходят в приложение под администраторами и 
и отправляет задания подчиненным, у которых оно появляется в приложении, далее администрация следит за количеством заданий и их статусами. 

## Возможности  
- Авторизация и регистрация пользователей  
- Создание, редактирование и удаление задач со стороны администрации 
- Администратор может управлять всеми задачами  
- Подключение к базе данных PostgreSQL
- Интерфейс на Qt6 с TableView для отображения задач
- Использование безопасного хранения паролей с хешированием и солью

## Используемые технологии

Язык программирования: C++
Фреймворк: Qt6 (Widgets, SQL, Core)
База данных: PostgreSQL
Система управления версиями: Git
Контейнеризация: Docker
Криптография: OpenSSL (для хеширования паролей)

## Настройки базы данных 

CREATE TABLE public.tasks (
	id serial4 NOT NULL,
	user_id int4 NULL,
	description varchar(30) NULL,
	complete bool DEFAULT false NULL,
	CONSTRAINT tasks_pkey PRIMARY KEY (id),
	CONSTRAINT tasks_user_id_fkey FOREIGN KEY (user_id) REFERENCES public.users(id) ON DELETE CASCADE
);

CREATE TABLE public.users (
	id serial4 NOT NULL,
	"name" varchar(30) NULL,
	"admin" bool NULL,
	hash_password text NULL,
	salt text NULL,
	CONSTRAINT users_pkey PRIMARY KEY (id)
);

## Установка и запуск  

1. Установите зависимости:  
   - Qt6  
   - PostgreSQL  
   - CMake  

2. Склонируйте репозиторий:  
	
 git clone https://github.com/triplq/TaskManager.git
	
 cd TaskManager

3. Соберите и запустите проект
	
 mkdir build && cd build
	
 cmake ..
	
 make

