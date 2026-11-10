/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084c6b8; name: FUN_0084c6b8
 */


void FUN_0084c6b8(undefined8 param_1,long *param_2,long param_3,long *param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined4 uVar13;
  uint uVar14;
  void *__src;
  uint uVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  ulong local_78 [2];
  ulong local_68 [2];
  undefined4 local_58 [2];
  
  uVar7 = *(ushort *)((long)param_4 + 0xc);
  lVar9 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
  if (*(char *)(lVar9 + 0x1f) == '\0') {
    if ((*(byte *)(param_4 + 1) >> 3 & 1) != 0) {
      plVar10 = (long *)(**(code **)(*param_2 + 0x40))(param_2,param_5);
      uVar4 = *(undefined1 *)((long)param_4 + 9);
      (**(code **)(*plVar10 + 0x18))();
      *(ushort *)(plVar10 + 3) = uVar7;
      *(undefined1 *)((long)plVar10 + 0x1e) = uVar4;
      goto LAB_0084c738;
    }
LAB_0084c760:
    local_68[0] = local_68[0] & 0xffffffff00000000;
  }
  else {
LAB_0084c738:
    lVar9 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
    uVar15 = (uint)uVar7;
    if ((uint)uVar7 <= (uint)*(ushort *)(lVar9 + 0x18) && *(ushort *)(lVar9 + 0x18) != uVar15) {
      *(undefined1 *)(param_2 + 0x97) = 1;
      goto LAB_0084c760;
    }
    lVar9 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
    if ((int)((uVar15 - *(ushort *)(lVar9 + 0x18)) + (uint)*(ushort *)(lVar9 + 0x1c)) <
        (int)(uint)*(ushort *)(lVar9 + 0x10)) {
      if ((((char)param_4[2] == '\0') ||
          ((1 << (ulong)(*(byte *)(param_2 + 2) & 0x1f) &
           *(uint *)((long)param_4 + ((ulong)(*(byte *)(param_2 + 2) >> 3) & 0x1c) + 0x14)) != 0))
         && (cVar5 = *(char *)((long)param_4 + 9),
            lVar9 = (**(code **)(*param_2 + 0x40))(param_2,param_5),
            cVar5 == *(char *)(lVar9 + 0x1e))) {
        lVar9 = (**(code **)(*param_2 + 0x40))(param_2,param_5);
        *(undefined1 *)(lVar9 + 0x1f) = 1;
        uVar14 = (uint)*(ushort *)(lVar9 + 0x1a);
        uVar15 = (uVar15 - *(ushort *)(lVar9 + 0x18)) + (uint)*(ushort *)(lVar9 + 0x1c);
        iVar8 = *(int *)(lVar9 + 0x14);
        uVar7 = *(ushort *)(lVar9 + 0x10);
        uVar2 = uVar15 & 0xffff;
        if (uVar2 < *(ushort *)(lVar9 + 0x1a)) {
          lVar16 = *(long *)(lVar9 + 8);
        }
        else {
          lVar16 = *(long *)(lVar9 + 8);
          do {
            uVar1 = uVar14 + iVar8;
            uVar3 = 0;
            if (uVar7 <= uVar1) {
              uVar3 = (uint)uVar7;
            }
            *(undefined1 *)(lVar16 + (ulong)(uVar1 - uVar3) * 0x5b8) = 0;
            uVar1 = uVar14 + 1;
            uVar14 = uVar1 & 0xffff;
          } while (uVar14 <= uVar2);
          *(short *)(lVar9 + 0x1a) = (short)uVar1;
        }
        uVar15 = iVar8 + uVar15;
        uVar2 = 0;
        if (uVar7 <= uVar15) {
          uVar2 = (uint)uVar7;
        }
        uVar18 = (ulong)(uVar15 - uVar2);
        *(undefined1 *)(param_2 + 0x97) = 1;
        pcVar17 = (char *)(lVar16 + uVar18 * 0x5b8);
        if (*pcVar17 == '\0') {
          uVar11 = (**(code **)(*param_4 + 0x20))(param_4);
          __src = (void *)(param_3 + (uVar11 & 0xffffffff));
          uVar15 = (uint)*(ushort *)((long)param_4 + 10);
          if ((*(byte *)(param_4 + 1) >> 4 & 1) != 0) {
            FUN_00844870(local_68,param_2[0x9b],__src,*(ushort *)((long)param_4 + 10));
            if ((int)local_68[0] != 0) {
              local_78[0]._0_4_ = 0x2c03;
              local_58[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_58);
              puVar12 = local_78;
              goto LAB_0084c858;
            }
            __src = *(void **)(param_2[0x9b] + 0x28);
            uVar15 = *(uint *)(param_2[0x9b] + 0x30);
          }
          iVar8 = (**(code **)(*param_4 + 0x20))(param_4);
          if (0x5a0 < iVar8 + uVar15) {
            uVar13 = 0x10407;
            goto LAB_0084c83c;
          }
          lVar16 = lVar16 + uVar18 * 0x5b8;
          memcpy((void *)(lVar16 + 6),__src,(ulong)uVar15);
          *pcVar17 = '\x01';
          bVar6 = *(byte *)(param_4 + 1);
          *(short *)(lVar16 + 4) = (short)uVar15;
          *(byte *)(lVar16 + 2) = bVar6 >> 4 & 1;
          *(byte *)(lVar16 + 1) = bVar6 >> 2 & 1;
          *(long *)(lVar16 + 0x5a8) = param_2[(ulong)(byte)param_5 + 0x7f];
          local_68[0] = 0;
          FUN_007ecf14(local_68);
          *(ulong *)(lVar16 + 0x5b0) = local_68[0];
        }
      }
      goto LAB_0084c760;
    }
    uVar13 = 0x4c0d;
LAB_0084c83c:
    local_68[0] = CONCAT44(local_68[0]._4_4_,uVar13);
  }
  local_78[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
  puVar12 = local_68;
LAB_0084c858:
  FUN_007ee578(param_1,puVar12);
  return;
}


