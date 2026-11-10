/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020d824; name: FUN_0020d824
 */


int FUN_0020d824(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0020d898(param_1,param_3);
  if (iVar1 == 0) {
    memset((void *)(param_1 + 0x40),0,0x400);
    if (param_2 < 0x1000) {
      *(undefined1 *)(param_1 + 0x450) = 1;
      *(ulong *)(param_1 + 0x30) = param_2;
    }
    else {
      *(undefined1 *)(param_1 + 0x450) = 0;
    }
    *(ulong *)(param_1 + 0x440) = param_2;
    *(undefined8 *)(param_1 + 0x448) = 0xffffffff;
  }
  return iVar1;
}


