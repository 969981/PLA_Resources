/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020cdd0; name: FUN_0020cdd0
 */


undefined8 FUN_0020cdd0(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20)) < *param_2) {
    uVar1 = 0xfffffdf6;
  }
  else {
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
    FUN_0020c7ac();
    lVar2 = FUN_0020ce40(*(undefined8 *)(lVar3 + 0x20),param_2[3],param_2[2]);
    uVar1 = 0;
    *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + lVar2;
  }
  return uVar1;
}


