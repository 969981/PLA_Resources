/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f666c; name: FUN_007f666c
 */


void FUN_007f666c(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  code *pcVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  
  uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x98))((long *)param_1[0x24],param_1[0x25]);
  if ((uVar8 & 1) == 0) {
    uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x28))();
    if ((uVar8 & 1) == 0) {
      uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x30))();
      if ((uVar8 & 1) == 0) {
        uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x38))();
        if ((uVar8 & 1) != 0) {
          FUN_00805e30(param_1[0x31]);
          FUN_00805e30(param_1[0x32]);
          if (*(char *)((long)param_1 + 0x249) != '\0') {
            *(undefined1 *)((long)param_1 + 0x249) = 0;
          }
          plVar15 = param_1 + 0x17;
          uVar8 = FUN_007f0ee4(plVar15);
          if ((uVar8 & 1) != 0) {
            uVar8 = FUN_007f0ee4(param_1 + 0x13);
            if (((((uVar8 & 1) != 0) &&
                 (uVar8 = FUN_007f0f48(param_1 + 0x13,plVar15), (uVar8 & 1) == 0)) &&
                ((int)param_1[0x38] == 0)) &&
               (uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x80))(), (uVar8 & 1) != 0)) {
              FUN_007f6ce4(auStack_60,param_1);
            }
          }
          FUN_007f0d58(plVar15);
          FUN_007f0d58(param_1 + 0x13);
          uVar2 = *(ushort *)((long)param_1 + 0x114e);
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            lVar9 = param_1[0x11];
            uVar14 = uVar8 & 3;
            if (uVar8 - 1 < 3) {
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              plVar15 = (long *)(lVar9 + 0x10);
              do {
                *(undefined1 *)(plVar15[-2] + 10) = 0;
                *(undefined1 *)(plVar15[-1] + 10) = 0;
                *(undefined1 *)(*plVar15 + 10) = 0;
                plVar1 = plVar15 + 1;
                lVar10 = lVar10 + 4;
                plVar15 = plVar15 + 4;
                *(undefined1 *)(*plVar1 + 10) = 0;
              } while (uVar8 - uVar14 != lVar10);
            }
            if ((uVar2 & 3) != 0) {
              plVar15 = (long *)(lVar9 + lVar10 * 8);
              do {
                uVar14 = uVar14 - 1;
                *(undefined1 *)(*plVar15 + 10) = 0;
                plVar15 = plVar15 + 1;
              } while (uVar14 != 0);
            }
          }
        }
      }
      else {
        FUN_007f0ce0(auStack_60);
        (**(code **)(*(long *)param_1[0x24] + 0x58))((long *)param_1[0x24],auStack_60);
        plVar15 = param_1 + 0x13;
        uVar8 = FUN_007f0f48(auStack_60,plVar15);
        if (((uVar8 & 1) == 0) && (uVar8 = FUN_007f0f48(plVar15,auStack_60), (uVar8 & 1) == 0)) {
          FUN_007f0f88(plVar15,auStack_60);
        }
        uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x88))();
        if ((uVar8 & 1) != 0) {
          plVar1 = param_1 + 0x17;
          uVar8 = FUN_007f0f48(plVar1,plVar15);
          if (((uVar8 & 1) == 0) && (uVar8 = FUN_007f0f48(plVar1,plVar15), (uVar8 & 1) == 0)) {
            FUN_007f0f88(plVar1,plVar15);
          }
          sVar3 = FUN_008473f4(param_1);
          sVar4 = FUN_008473a0(param_1);
          if (sVar3 != sVar4) {
            uVar5 = FUN_008473a0(param_1);
            FUN_00847410(param_1,uVar5);
          }
          lVar9 = FUN_008473ec(param_1);
          lVar10 = FUN_00847388(param_1);
          if (lVar9 != lVar10) {
            uVar11 = FUN_00847388(param_1);
            FUN_008473fc(param_1,uVar11);
          }
        }
        if (*(short *)((long)param_1 + 0x114e) == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          bVar12 = 0;
          do {
            uVar8 = (**(code **)(*(long *)param_1[0x25] + 0x60))((long *)param_1[0x25],bVar12);
            if (((uVar8 & 1) == 0) &&
               (uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x60))((long *)param_1[0x24],bVar12),
               (uVar8 & 1) != 0)) {
              pcVar13 = *(code **)(*param_1 + 0x208);
LAB_007f6814:
              uVar6 = (*pcVar13)(param_1,bVar12);
              uVar16 = uVar16 | uVar6;
            }
            else {
              uVar8 = (**(code **)(*(long *)param_1[0x25] + 0x60))((long *)param_1[0x25],bVar12);
              if (((uVar8 & 1) != 0) &&
                 (uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x60))((long *)param_1[0x24],bVar12)
                 , (uVar8 & 1) == 0)) {
                pcVar13 = *(code **)(*param_1 + 0x210);
                goto LAB_007f6814;
              }
              uVar8 = (**(code **)(*(long *)param_1[0x25] + 0x60))((long *)param_1[0x25],bVar12);
              if (((uVar8 & 1) != 0) &&
                 (uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x60))((long *)param_1[0x24],bVar12)
                 , (uVar8 & 1) != 0)) {
                lVar9 = param_1[0x22e];
                (**(code **)(*(long *)param_1[0x25] + 0x48))((long *)param_1[0x25],bVar12,lVar9);
                lVar10 = param_1[0x22f];
                (**(code **)(*(long *)param_1[0x24] + 0x48))((long *)param_1[0x24],bVar12,lVar10);
                uVar8 = FUN_007f0f48(lVar9,lVar10);
                if ((uVar8 & 1) == 0) {
                  uVar6 = (**(code **)(*param_1 + 0x210))(param_1,bVar12);
                  uVar7 = (**(code **)(*param_1 + 0x208))(param_1,bVar12);
                  uVar16 = uVar16 | uVar6 | uVar7;
                }
              }
            }
            bVar12 = bVar12 + 1;
          } while ((ushort)bVar12 < *(ushort *)((long)param_1 + 0x114e));
        }
        uVar8 = (**(code **)(*(long *)param_1[0x24] + 0x88))();
        if ((((uVar16 & 1) != 0) && ((uVar8 & 1) != 0)) &&
           (((int)param_1[0x38] != 1 || (*(char *)((long)param_1 + 0x249) != '\0')))) {
          FUN_007f6af0(param_1);
        }
        uVar8 = FUN_007f0ee4(param_1 + 0x17);
        if (((((uVar8 & 1) != 0) && (uVar8 = FUN_007f0ee4(plVar15), (uVar8 & 1) != 0)) &&
            (uVar8 = FUN_007f0f48(plVar15,param_1 + 0x17), (uVar8 & 1) == 0)) &&
           (((int)param_1[0x38] == 0 && (uVar8 = FUN_00802714(param_1[0x24]), (uVar8 & 1) == 0)))) {
          FUN_007f6ce4(auStack_70,param_1);
        }
      }
    }
    else {
      FUN_007f0d58(param_1 + 0x13);
      FUN_007f0d58(param_1 + 0x17);
    }
    (**(code **)(*(long *)param_1[0x25] + 0x18))((long *)param_1[0x25],param_1[0x24]);
    if (*(char *)((long)param_1 + 0x24d) != '\0') {
      *(undefined1 *)((long)param_1 + 0x24d) = 0;
    }
  }
  return;
}


