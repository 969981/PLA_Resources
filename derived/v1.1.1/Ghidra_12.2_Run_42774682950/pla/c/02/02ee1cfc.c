/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee1cfc; name: FUN_02ee1cfc
 */


void FUN_02ee1cfc(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                 ulong *param_5,undefined8 *param_6)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  float local_44;
  
  puVar8 = (undefined8 *)*param_3;
  if (puVar8 != (undefined8 *)0x0) {
    if ((int)param_3[9] == 2) {
      FUN_02ee2280(param_2,param_1,param_3,param_4,&local_90,&local_44);
      (**(code **)*puVar8)
                (local_90 & 0xffffffff,(float)local_90 - local_44,puVar8,(int)param_3[1],param_5,
                 param_6);
    }
    else {
      switch((int)param_3[9]) {
      case 0:
        if ((((((*param_5 == 0) || (param_3[3] == *param_5)) &&
              (((int)param_5[1] == 0 || ((int)param_3[4] == (int)param_5[1])))) &&
             (((int)param_5[2] == 0 || ((int)param_3[5] == (int)param_5[2])))) &&
            (((char)param_5[3] == -1 || ((char)param_3[6] == (char)param_5[3])))) &&
           (((((char)param_5[4] == -1 || ((char)param_3[7] == (char)param_5[4])) &&
             ((param_5[5] == 0 || (param_3[8] == param_5[5])))) &&
            ((param_6 == (undefined8 *)0x0 ||
             (uVar2 = (**(code **)*param_6)(param_6), (uVar2 & 1) == 0)))))) {
          uVar10 = FUN_02ee21dc(param_2,param_3,param_4);
          local_90 = CONCAT44(local_90._4_4_,uVar10);
          FUN_02e9cd3c(*param_3,(int)param_3[1],&local_90,4);
        }
        break;
      case 1:
        if ((((*param_5 == 0) || (param_3[3] == *param_5)) &&
            ((((int)param_5[1] == 0 || ((int)param_3[4] == (int)param_5[1])) &&
             (((int)param_5[2] == 0 || ((int)param_3[5] == (int)param_5[2])))))) &&
           ((((char)param_5[3] == -1 || ((char)param_3[6] == (char)param_5[3])) &&
            (((((char)param_5[4] == -1 || ((char)param_3[7] == (char)param_5[4])) &&
              ((param_5[5] == 0 || (param_3[8] == param_5[5])))) &&
             ((param_6 == (undefined8 *)0x0 ||
              (uVar2 = (**(code **)*param_6)(param_6), (uVar2 & 1) == 0)))))))) {
          FUN_02ee2280(param_2,param_1,param_3,param_4,&local_44,&local_90);
          (**(code **)(*(long *)*param_3 + 0x18))
                    (local_44,(long *)*param_3,(int)param_3[1],param_4,
                     *(undefined4 *)((long)param_3 + 0x4c));
        }
        break;
      default:
        lVar4 = puVar8[6];
        if (((lVar4 != 0) && (lVar6 = *(long *)(lVar4 + 0x78), lVar6 != 0)) &&
           ((0 < *(short *)(lVar6 + 0x90) ||
            ((0 < *(short *)(lVar6 + 0x94) && (*(char *)(lVar4 + 0x108) != '\0')))))) {
          if ((int)param_3[1] == 0x3a) {
            FUN_02eb7100(param_1,param_2,puVar8,param_5,param_6);
            return;
          }
          uVar2 = FUN_02eb669c(puVar8);
          if ((uVar2 & 1) != 0) {
            uVar11 = FUN_02ee21dc(param_2,param_3,param_4);
            uVar12 = FUN_02ee21dc(param_1,param_3,param_4);
            FUN_02eb63c4(uVar11,uVar12,puVar8,param_3,(int)param_3[1],param_4,param_5,param_6);
            return;
          }
        }
        break;
      case 3:
        FUN_02ee21dc(param_2,param_3,param_4);
        FUN_02eb9b44(*param_3,(int)param_3[1],param_5);
        return;
      case 6:
        lVar4 = param_3[10];
        local_90._0_4_ = (float)*(undefined4 *)(lVar4 + 0x18);
        fVar9 = (float)FUN_02e74568(param_2,lVar4 + 8,&local_90);
        *(float *)(lVar4 + 0x18) = (float)local_90;
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(lVar4 + 0x18));
        FUN_02e74568(param_1,lVar4 + 8,&local_90);
        *(float *)(lVar4 + 0x18) = (float)local_90;
        lVar4 = DAT_0440a130;
        lVar6 = *param_3;
        iVar5 = *(int *)(DAT_0440a130 + 0x1c0) + 1;
        *(int *)(DAT_0440a130 + 0x1c0) = iVar5;
        if (((lVar6 != 0) && ((uint)(int)fVar9 < *(uint *)(lVar6 + 0x18))) &&
           (uVar3 = *(uint *)(lVar6 + 0x30), uVar3 != 0)) {
          puVar7 = *(undefined8 **)(lVar6 + 0x28);
          puVar8 = puVar7;
          do {
            if ((*(char *)((long)*puVar8 + 0x14) != '\0') &&
               (plVar1 = *(long **)*puVar8, plVar1 != (long *)0x0)) {
              local_90 = *param_5;
              local_80 = 0;
              local_88 = 0;
              local_78 = 0xff;
              local_70 = 0xff;
              local_68 = 0;
              (**(code **)(*plVar1 + 0x10))
                        (plVar1,*(undefined4 *)
                                 (*(long *)(lVar6 + 0x10) + (ulong)(uint)(int)fVar9 * 4),&local_90,
                         param_6);
              puVar7 = *(undefined8 **)(lVar6 + 0x28);
              uVar3 = *(uint *)(lVar6 + 0x30);
            }
            puVar8 = puVar8 + 1;
          } while (puVar8 != puVar7 + uVar3);
          iVar5 = *(int *)(DAT_0440a130 + 0x1c0);
          lVar4 = DAT_0440a130;
        }
        *(int *)(lVar4 + 0x1c0) = iVar5 + -1;
        if (iVar5 + -1 == 0) {
          FUN_02f0cbdc();
        }
      }
    }
  }
  return;
}


