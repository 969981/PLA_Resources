/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eff60; name: FUN_003eff60
 */


void FUN_003eff60(int *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (*param_1 == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 9) == '\0') {
    uVar6 = param_1[1] * *param_1;
    if (uVar6 < 0x40) {
LAB_003f007c:
      if (uVar6 == 0) {
        return;
      }
      uVar3 = (ulong)uVar6;
      puVar5 = (ulong *)(param_1 + 4);
      bVar1 = (byte)*puVar5;
      if ((bVar1 & 1) == 0) {
        uVar4 = 0x16 - (ulong)(bVar1 >> 1);
      }
      else {
        uVar4 = ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1) - *(long *)(param_1 + 6);
      }
      if (uVar4 < uVar3) {
        if ((bVar1 & 1) == 0) {
          lVar2 = 0x16;
        }
        else {
          lVar2 = (*puVar5 & 0xfffffffffffffffe) - 1;
        }
        FUN_0030ff7c(puVar5,lVar2 + ((ulong)((uVar6 - (int)uVar4) + 0xff) & 0xffffff00));
      }
      FUN_002e4094(puVar5,"                                                                " +
                          (0x40 - uVar3),uVar3);
      return;
    }
    puVar5 = (ulong *)(param_1 + 4);
    uVar3 = (ulong)(byte)*puVar5;
    uVar7 = uVar6;
    if (((byte)*puVar5 & 1) == 0) goto LAB_003f001c;
    do {
      uVar4 = ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1) - *(long *)(param_1 + 6);
      while( true ) {
        if (uVar4 < 0x40) {
          if ((uVar3 & 1) == 0) {
            lVar2 = 0x16;
          }
          else {
            lVar2 = (*puVar5 & 0xfffffffffffffffe) - 1;
          }
          FUN_0030ff7c(puVar5,lVar2 + ((ulong)(0x13f - (int)uVar4) & 0xffffff00));
        }
        FUN_002e4094(puVar5,"                                                                ",0x40)
        ;
        uVar7 = uVar7 - 0x40;
        if (uVar7 < 0x40) {
          uVar6 = uVar6 & 0x3f;
          goto LAB_003f007c;
        }
        uVar3 = (ulong)(byte)*puVar5;
        if (((byte)*puVar5 & 1) != 0) break;
LAB_003f001c:
        uVar4 = 0x16 - (uVar3 >> 1);
      }
    } while( true );
  }
  puVar5 = (ulong *)(param_1 + 4);
  bVar1 = (byte)*puVar5;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0x16) goto LAB_003f00e0;
  }
  else if ((*(ulong *)(param_1 + 4) & 0xfffffffffffffffe) - 1 != *(long *)(param_1 + 6))
  goto LAB_003f00e0;
  if ((bVar1 & 1) == 0) {
    lVar2 = 0x116;
  }
  else {
    lVar2 = (*puVar5 & 0xfffffffffffffffe) + 0xff;
  }
  FUN_0030ff7c(puVar5,lVar2);
LAB_003f00e0:
  FUN_002e6a9c(puVar5,0x20);
  return;
}


