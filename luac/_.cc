struct Lua {
	lua_State *L ;
};

void __hascal__lua_exec(std::string code){
	Lua lua = {luaL_newstate()};
	if(lua.L == NULL){}
	luaL_openlibs(lua.L);
	luaL_loadstring(lua.L,code.c_str());
	lua_call(lua.L, 0, 0);
	lua_close(lua.L);
}
