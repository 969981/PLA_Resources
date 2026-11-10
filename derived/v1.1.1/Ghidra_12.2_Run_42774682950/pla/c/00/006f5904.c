/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f5904; name: FUN_006f5904
 */


void FUN_006f5904(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x68;
    FUN_02cd5c94(lVar2 + -0x20,*(undefined8 *)(lVar2 + -0x18));
    if ((*(byte *)(lVar2 + -0x40) & 1) != 0) {
      (**(code **)(**(long **)(lVar2 + -0x28) + 0x18))
                (*(long **)(lVar2 + -0x28),*(undefined8 *)(lVar2 + -0x30),
                 *(ulong *)(lVar2 + -0x40) & 0xfffffffffffffffe,1);
    }
    FUN_006d9cd8(lVar2 + -0x48);
    if ((*(byte *)(lVar2 + -0x68) & 1) != 0) {
      (**(code **)(**(long **)(lVar2 + -0x50) + 0x18))
                (*(long **)(lVar2 + -0x50),*(undefined8 *)(lVar2 + -0x58),
                 *(ulong *)(lVar2 + -0x68) & 0xfffffffffffffffe,1);
    }
    lVar2 = param_1[2];
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f59bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar1,param_1[3] - lVar1,8);
  return;
}


