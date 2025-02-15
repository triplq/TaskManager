В данном коммите улучшил архитектуру, добавил авторизацию- админ и пользователь, немного пересторил проект и теперь class TaskManager отвечает только за открытие, закрытие бд и 
открытие аккаунтов(необходимо еще довести до ума, но уже в front'e). 

Также начал писать README файл и перестроил бд- теперь есть две таблицы:

CREATE TABLE public.users (
	id serial4 NOT NULL,
	"name" varchar(30) NULL,
	phone varchar(30) NULL,
	"admin" bool NULL,
	CONSTRAINT users_phone_check CHECK (((phone)::text <> ''::text)),
	CONSTRAINT users_phone_key UNIQUE (phone),
	CONSTRAINT users_phone_key1 UNIQUE (phone),
	CONSTRAINT users_pkey PRIMARY KEY (id)
);

CREATE TABLE public.tasks (
	id serial4 NOT NULL,
	user_id int4 NULL,
	description varchar(30) NULL,
	complete bool DEFAULT false NULL,
	CONSTRAINT tasks_pkey PRIMARY KEY (id),
	CONSTRAINT tasks_user_id_fkey FOREIGN KEY (user_id) REFERENCES public.users(id) ON DELETE CASCADE
);

В следующем коммите планирую начать делать GUI и довести до ума авторизацию пользователя и рассмотрю может будет лучше чтоб Админ наследовался из Пользователя.
