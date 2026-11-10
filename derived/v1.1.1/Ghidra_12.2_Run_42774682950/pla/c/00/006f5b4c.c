/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f5b4c; name: FUN_006f5b4c
 */


void FUN_006f5b4c(long *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar3) {
    lVar4 = lVar3;
  }
  else {
    lVar5 = 0;
    do {
      lVar1 = lVar4 + lVar5;
      FUN_02cd5c94(lVar1 + -0x20,*(undefined8 *)(lVar1 + -0x18));
      if ((*(byte *)(lVar1 + -0x40) & 1) == 0) {
        FUN_006d9cd8(lVar1 + -0x48);
        bVar2 = *(byte *)(lVar1 + -0x68);
      }
      else {
        (**(code **)(**(long **)(lVar1 + -0x28) + 0x18))
                  (*(long **)(lVar1 + -0x28),*(undefined8 *)(lVar1 + -0x30),
                   *(ulong *)(lVar1 + -0x40) & 0xfffffffffffffffe,1);
        FUN_006d9cd8(lVar1 + -0x48);
        bVar2 = *(byte *)(lVar1 + -0x68);
      }
      if ((bVar2 & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x50) + 0x18))
                  (*(long **)(lVar1 + -0x50),*(undefined8 *)(lVar1 + -0x58),
                   *(ulong *)(lVar1 + -0x68) & 0xfffffffffffffffe,1);
      }
      lVar5 = lVar5 + -0x68;
    } while (lVar3 - lVar4 != lVar5);
    lVar4 = *param_1;
  }
  param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x006f5c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,param_1[2] - lVar4,8);
  return;
}


