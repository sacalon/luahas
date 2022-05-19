# LuaHas
Lua interpreter for [Hascal programming language](https://github.com/hascal/hascal)

## Install
```
$ hascal install lua
```

## Example
At first install lua with top command.

`example.has` :
```typescript
use luahas

function main():int {
	lua_exec("print 'hello world'")
	return 0
}
```
Compile and run :
```bash
$ hascal example.has
$ ./example
hello world
```

## License
**MIT**
