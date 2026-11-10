/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f5bfc; name: FUN_029f5bfc
 */


void FUN_029f5bfc(long param_1,undefined1 *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined2 local_64;
  
  *param_2 = 0;
  bVar2 = *param_3;
  if (bVar2 < 2) {
LAB_029f5c74:
    local_64 = CONCAT11(local_64._1_1_,bVar2);
  }
  else {
    if (bVar2 != 5) {
      if (bVar2 != 4) {
        if (bVar2 != 3) {
          return;
        }
        bVar2 = 0;
        local_64 = 0x100;
        lVar4 = 2;
        goto LAB_029f5c7c;
      }
      bVar2 = 1;
      goto LAB_029f5c74;
    }
    bVar2 = 0;
    local_64 = (ushort)local_64._1_1_ << 8;
  }
  lVar4 = 1;
LAB_029f5c7c:
  lVar5 = 0;
  if (param_3[5] == 0) goto LAB_029f5d5c;
  do {
    uVar7 = 0;
    uVar3 = 0;
    do {
      uVar1 = (uVar3 >> 3) + 1;
      if (((uVar1 & 0xff) < (uint)param_3[1]) &&
         ((1 << (ulong)(uVar3 & 7) & (uint)param_3[(ulong)(byte)uVar1 + 1]) != 0)) {
        uVar1 = FUN_02a3cda8(*(undefined8 *)(param_1 + 0x20),bVar2,uVar3);
        uVar7 = uVar7 | uVar1;
      }
      uVar3 = uVar3 + 1;
      lVar6 = lVar5;
    } while (uVar3 != 0x13);
    while( true ) {
      if ((uVar7 & 1) != 0) {
        *param_2 = 1;
      }
      lVar5 = lVar6 + 1;
      if (lVar5 == lVar4) {
        return;
      }
      bVar2 = *(byte *)((long)&local_64 + lVar6 + 1);
      if (param_3[5] != 0) break;
LAB_029f5d5c:
      uVar7 = 0;
      uVar3 = 0;
      do {
        uVar1 = (uVar3 >> 3) + 1;
        if (((uVar1 & 0xff) < (uint)param_3[1]) &&
           ((1 << (ulong)(uVar3 & 7) & (uint)param_3[(ulong)(byte)uVar1 + 1]) != 0)) {
          uVar1 = FUN_02a3ccd4(*(undefined8 *)(param_1 + 0x20),bVar2,uVar3);
          uVar7 = uVar7 | uVar1;
        }
        uVar3 = uVar3 + 1;
        lVar6 = lVar5;
      } while (uVar3 != 0x13);
    }
  } while( true );
}


