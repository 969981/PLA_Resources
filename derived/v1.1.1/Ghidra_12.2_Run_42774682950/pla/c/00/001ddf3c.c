/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ddf3c; name: FUN_001ddf3c
 */


undefined8 FUN_001ddf3c(long param_1,undefined1 *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  if ((*(char *)(param_1 + 1) == '\x02') &&
     (lVar1 = FUN_001e3530(2,param_1 + 4,param_2,0x2e), lVar1 != 0)) {
    uVar2 = nnsocketInetNtohs(*(undefined2 *)(param_1 + 2));
    uVar3 = 1;
    *param_3 = uVar2 & 0xffff;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    piVar4 = __errno_location();
    uVar3 = 0;
    *piVar4 = 0x61;
  }
  return uVar3;
}


