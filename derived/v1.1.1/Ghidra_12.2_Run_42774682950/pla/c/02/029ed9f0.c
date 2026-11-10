/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ed9f0; name: FUN_029ed9f0
 */


void FUN_029ed9f0(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  byte local_78 [8];
  undefined8 local_70;
  undefined1 local_68;
  
  bVar1 = *(byte *)(param_3 + 0xd88);
  if ((ulong)bVar1 == 0) {
    return;
  }
  uVar9 = 0;
  if (bVar1 == 0) goto LAB_029edb5c;
  do {
    pcVar10 = (char *)(param_3 + uVar9 * 0x60 + 0x65);
    if (((*pcVar10 == '\0') && (*(int *)(param_3 + uVar9 * 0x60 + 0x10) == 3)) &&
       (*(char *)(param_3 + uVar9 * 0x60 + 0x28) == '\0')) {
      bVar2 = *(byte *)(*(long *)(param_3 + uVar9 * 0x60 + 8) + 0x7d);
      if (bVar2 < 6) {
        lVar3 = 0;
      }
      else if (bVar2 < 0xc) {
        lVar3 = 2;
      }
      else if (bVar2 < 0x12) {
        lVar3 = 1;
      }
      else if (bVar2 < 0x18) {
        lVar3 = 3;
      }
      else {
        lVar3 = (ulong)(bVar2 < 0x1e) << 2;
      }
      lVar4 = param_3 + uVar9 * 0x60;
      lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
      bVar2 = *(byte *)(lVar4 + 0x26);
      local_68 = *(undefined1 *)(lVar4 + 0x27);
      if (bVar2 < *(byte *)(lVar7 + lVar3 * 0x38 + 0x38)) {
        local_70 = *(undefined8 *)(lVar7 + lVar3 * 0x38 + (ulong)bVar2 * 8 + 8);
      }
      else {
        local_70 = 0;
      }
      FUN_029eb040(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x13e0),local_78,&local_70);
      if (local_78[0] < 0x1e) {
        bVar2 = *(byte *)(param_2 + 8);
        uVar5 = (ulong)bVar2;
        if (uVar5 == 0) {
          uVar5 = 0;
        }
        else {
          pbVar6 = (byte *)(param_2 + 9);
          uVar8 = uVar5;
          do {
            if (*pbVar6 == local_78[0]) goto LAB_029edb58;
            uVar8 = uVar8 - 1;
            pbVar6 = pbVar6 + 1;
          } while (uVar8 != 0);
        }
        *(byte *)(param_2 + uVar5 + 9) = local_78[0];
        *(byte *)(param_2 + 8) = bVar2 + 1;
      }
LAB_029edb58:
      *pcVar10 = '\x01';
    }
LAB_029edb5c:
    do {
      uVar9 = uVar9 + 1;
      if (uVar9 == bVar1) {
        return;
      }
    } while (*(byte *)(param_3 + 0xd88) <= uVar9);
  } while( true );
}


