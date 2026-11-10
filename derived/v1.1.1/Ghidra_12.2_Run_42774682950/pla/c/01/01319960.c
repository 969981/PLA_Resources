/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01319960; name: FUN_01319960
 */


void FUN_01319960(long *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar10 = *param_1;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  fVar13 = *(float *)(lVar10 + 0xd60);
  if (*(char *)(lVar10 + 0x1e08) == '\0') {
    fVar14 = *(float *)(lVar10 + 0x1e30);
    fVar12 = *(float *)(lVar10 + 0xd64);
    fVar13 = fVar13 + (fVar13 - fVar13) * fVar14;
    fVar15 = fVar12 - fVar12;
  }
  else {
    fVar13 = fVar13 + *(float *)(lVar10 + 0x1e28);
    fVar12 = *(float *)(lVar10 + 0xd64) + *(float *)(lVar10 + 0x1e2c);
    fVar15 = *(float *)(lVar10 + 0x1e30);
    fVar13 = fVar13 + (fVar13 - fVar13) * fVar15;
    fVar14 = fVar12 - fVar12;
  }
  local_50 = CONCAT44(fVar12 + fVar15 * fVar14,fVar13);
  iVar3 = FUN_01317a6c(lVar10,&local_80,&local_50);
  if (iVar3 != -1) {
    lVar4 = *(long *)(lVar10 + 0x5c0);
    uVar1 = *(undefined4 *)(lVar4 + 0x84);
    if (local_80._1_1_ == '\x01') {
      iVar3 = FUN_0131a338();
      if (iVar3 == 7) {
        iVar3 = 5;
      }
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_0131c8b8(uVar1,iVar3,&local_98,1);
      uVar5 = local_98 & 0xffffffff;
      if ((int)local_98 != 0) {
        piVar9 = (int *)((ulong)&local_98 | 4);
        do {
          if (*piVar9 == (int)local_68) {
            *(undefined4 *)(lVar10 + 0x5c8) = 2;
            *(int *)(*(long *)(lVar10 + 0x5c0) + 0xe0) = (int)local_68;
            cVar2 = *(char *)(lVar10 + 0xd5c);
            goto joined_r0x01319a50;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 1;
        } while (uVar5 != 0);
      }
    }
    else if (local_80._1_1_ == '\x02') {
      lVar11 = *(long *)(lVar4 + 0x198);
      if (iVar3 == 0x18) {
        FUN_0131aa8c(*(undefined8 *)(lVar4 + 0x78),uVar1);
        *(undefined1 *)(lVar11 + 0x1430) = 0;
        lVar4 = *(long *)(lVar11 + 0x13a0);
        *(undefined8 *)(lVar11 + 0x1460) = 0;
        *(undefined8 *)(lVar11 + 0x1458) = 0;
        *(undefined8 *)(lVar11 + 0x1450) = 0;
        *(undefined8 *)(lVar11 + 0x1448) = 0;
        *(undefined8 *)(lVar11 + 0x1440) = 0;
        *(undefined8 *)(lVar11 + 0x1438) = 0;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined4 *)(lVar4 + 0x38) = 0;
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
        lVar4 = *(long *)(lVar11 + 0x13a0);
        *(undefined8 *)(lVar4 + 0x3c) = 0;
        *(undefined4 *)(lVar4 + 0x44) = 0;
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar11 + 0x13a0) + 0x58) =
             *(byte *)(*(long *)(lVar11 + 0x13a0) + 0x58) & 0xfe;
        lVar4 = *(long *)(lVar11 + 0x13a8);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(undefined4 *)(lVar4 + 0x38) = 0;
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
          lVar4 = *(long *)(lVar11 + 0x13a8);
          *(undefined4 *)(lVar4 + 0x44) = 0;
          *(undefined8 *)(lVar4 + 0x3c) = 0;
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
          *(byte *)(*(long *)(lVar11 + 0x13a8) + 0x58) =
               *(byte *)(*(long *)(lVar11 + 0x13a8) + 0x58) & 0xfe;
          pcVar6 = *(code **)(lVar11 + 0x13b8);
          *(undefined8 *)(lVar11 + 0x13a8) = 0;
          if (pcVar6 != (code *)0x0) {
            *(undefined8 *)(lVar11 + 0x13c8) = 0;
            lVar4 = lVar11 + 0x13d0;
            *(undefined8 *)(lVar11 + 0x13c0) = 0;
            *(undefined8 *)(lVar11 + 0x13b8) = 0;
            *(undefined8 *)(lVar11 + 0x13b0) = 0;
LAB_01319bf0:
            (*pcVar6)(lVar4);
          }
        }
      }
      else if (iVar3 - 0x19U < 0x14) {
        FUN_0131aa94(*(undefined8 *)(lVar4 + 0x78),uVar1);
        lVar4 = lVar11 + (long)iVar3 * 0xd0;
        lVar8 = *(long *)(lVar4 + 0x20);
        *(undefined1 *)(lVar4 + 0xb0) = 0;
        *(undefined8 *)(lVar4 + 0xd8) = 0;
        *(undefined8 *)(lVar4 + 0xe0) = 0;
        *(undefined8 *)(lVar4 + 200) = 0;
        *(undefined8 *)(lVar4 + 0xd0) = 0;
        *(undefined8 *)(lVar4 + 0xb8) = 0;
        *(undefined8 *)(lVar4 + 0xc0) = 0;
        *(undefined8 *)(lVar8 + 0x30) = 0;
        *(undefined4 *)(lVar8 + 0x38) = 0;
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
        lVar8 = *(long *)(lVar4 + 0x20);
        *(undefined8 *)(lVar8 + 0x3c) = 0;
        *(undefined4 *)(lVar8 + 0x44) = 0;
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
        *(byte *)(*(long *)(lVar4 + 0x20) + 0x58) = *(byte *)(*(long *)(lVar4 + 0x20) + 0x58) & 0xfe
        ;
        plVar7 = (long *)(lVar4 + 0x28);
        lVar4 = *plVar7;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(undefined4 *)(lVar4 + 0x38) = 0;
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
          lVar4 = *plVar7;
          *(undefined4 *)(lVar4 + 0x44) = 0;
          *(undefined8 *)(lVar4 + 0x3c) = 0;
          *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
          *(byte *)(*plVar7 + 0x58) = *(byte *)(*plVar7 + 0x58) & 0xfe;
          *plVar7 = 0;
          pcVar6 = *(code **)(lVar11 + (long)iVar3 * 0xd0 + 0x38);
          if (pcVar6 != (code *)0x0) {
            lVar11 = lVar11 + (long)iVar3 * 0xd0;
            lVar4 = lVar11 + 0x50;
            *(undefined8 *)(lVar11 + 0x40) = 0;
            *(undefined8 *)(lVar11 + 0x48) = 0;
            *(undefined8 *)(lVar11 + 0x30) = 0;
            *(undefined8 *)(lVar11 + 0x38) = 0;
            goto LAB_01319bf0;
          }
        }
      }
      local_50 = 0xed4762fd01a83b50;
      pcStack_48 = "PLAY_UI_COMMON_MAP_REMOVE";
      local_40 = 0x19;
      local_38 = (long *)0x0;
      FUN_028354b0(&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      FUN_0130fa44(lVar10);
      FUN_00d42438(lVar10,1,1);
      pcVar6 = *(code **)(lVar10 + 0x6d0);
      goto joined_r0x01319a58;
    }
  }
  *(undefined4 *)(lVar10 + 0x5c8) = 1;
  cVar2 = *(char *)(lVar10 + 0xd5c);
joined_r0x01319a50:
  if (cVar2 == '\0') {
    pcVar6 = *(code **)(lVar10 + 0x6d0);
  }
  else {
    local_50 = 0x7a4a9d0dc22b5460;
    pcStack_48 = "STOP_UI_COMMON_MAP_CURSOR_MOVE";
    local_40 = 0x1e;
    local_38 = (long *)0x0;
    FUN_028354b0(&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    *(undefined1 *)(lVar10 + 0xd5c) = 0;
    pcVar6 = *(code **)(lVar10 + 0x6d0);
  }
joined_r0x01319a58:
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(lVar10 + 0x6f0);
  }
  return;
}


