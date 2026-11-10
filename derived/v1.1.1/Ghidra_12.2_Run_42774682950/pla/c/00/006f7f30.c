/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f7f30; name: FUN_006f7f30
 */


void FUN_006f7f30(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (lVar3 == lVar2) {
    lVar3 = lVar2;
  }
  else {
    do {
      if ((*(byte *)(lVar3 + -0x20) & 1) == 0) {
        if ((*(byte *)(lVar3 + -0x40) & 1) == 0) goto LAB_006f7f78;
LAB_006f7fac:
        (**(code **)(**(long **)(lVar3 + -0x28) + 0x18))
                  (*(long **)(lVar3 + -0x28),*(undefined8 *)(lVar3 + -0x30),
                   *(ulong *)(lVar3 + -0x40) & 0xfffffffffffffffe,1);
        bVar1 = *(byte *)(lVar3 + -0x68);
      }
      else {
        (**(code **)(**(long **)(lVar3 + -8) + 0x18))
                  (*(long **)(lVar3 + -8),*(undefined8 *)(lVar3 + -0x10),
                   *(ulong *)(lVar3 + -0x20) & 0xfffffffffffffffe,1);
        if ((*(byte *)(lVar3 + -0x40) & 1) != 0) goto LAB_006f7fac;
LAB_006f7f78:
        bVar1 = *(byte *)(lVar3 + -0x68);
      }
      if ((bVar1 & 1) != 0) {
        (**(code **)(**(long **)(lVar3 + -0x50) + 0x18))
                  (*(long **)(lVar3 + -0x50),*(undefined8 *)(lVar3 + -0x58),
                   *(ulong *)(lVar3 + -0x68) & 0xfffffffffffffffe,1);
      }
      lVar3 = lVar3 + -0x70;
    } while (lVar2 != lVar3);
    lVar3 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x006f801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[2] - lVar3,8);
  return;
}


