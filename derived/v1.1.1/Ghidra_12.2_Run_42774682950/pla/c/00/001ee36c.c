/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee36c; name: FUN_001ee36c
 */


undefined1 FUN_001ee36c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  size_t sVar4;
  char *__s;
  undefined8 *puVar5;
  
  puVar5 = *(undefined8 **)(param_1 + 0xc28);
  bVar1 = 4 < param_3;
  do {
    if (puVar5 == (undefined8 *)0x0) {
      uVar2 = 2;
LAB_001ee3e0:
      if (4 < param_3) {
        param_3 = 5;
      }
      iVar3 = thunk_FUN_001f8bec("HTTP/",param_2,param_3);
      if (iVar3 != 0) {
        uVar2 = bVar1;
      }
      return uVar2;
    }
    __s = (char *)*puVar5;
    sVar4 = strlen(__s);
    if (param_3 <= sVar4) {
      sVar4 = param_3;
    }
    iVar3 = thunk_FUN_001f8bec(__s,param_2,sVar4);
    if (iVar3 != 0) {
      if (4 < param_3) {
        return 1;
      }
      uVar2 = 0;
      goto LAB_001ee3e0;
    }
    puVar5 = (undefined8 *)puVar5[1];
  } while( true );
}


