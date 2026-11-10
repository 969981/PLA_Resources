/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6b854; name: FUN_02f6b854
 */


void FUN_02f6b854(undefined8 *param_1,uint *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  float fVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined5 uStack_b4;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 local_80 [2];
  undefined4 local_7c;
  undefined8 local_78;
  
  if (0 < param_3) {
    auVar12 = NEON_fmov(0x3f800000,4);
    iVar9 = 0;
    do {
      switch(iVar9) {
      case 0:
        uVar6 = *param_2;
        cVar1 = *(char *)(param_1 + 0x11);
        break;
      case 1:
        uVar6 = param_2[1];
        cVar1 = *(char *)(param_1 + 0x11);
        break;
      case 2:
        uVar6 = param_2[2];
        cVar1 = *(char *)(param_1 + 0x11);
        break;
      case 3:
        uVar6 = param_2[3];
        cVar1 = *(char *)(param_1 + 0x11);
        break;
      default:
        uVar6 = 0;
        cVar1 = *(char *)(param_1 + 0x11);
      }
      if (cVar1 == '\0') {
        lVar10 = param_1[1];
        lVar8 = lVar10 + (ulong)uVar6 * 0xc0;
        if ((~*(uint *)(lVar8 + 0x50) & 0xffffff) != 0) {
          lVar5 = param_1[2];
          lVar7 = *(long *)(lVar5 + 0x38);
          if ((lVar7 == 0) || (*(uint *)(lVar8 + 0x50) != *(uint *)(lVar7 + 0x50))) {
            plVar3 = *(long **)(lVar5 + 8);
            if (plVar3 != (long *)0x0) {
              if (lVar7 != 0) {
                uVar4 = (**(code **)(*plVar3 + 0x38))
                                  (plVar3,5,*(undefined8 *)(lVar7 + 0xb0),
                                   *(undefined8 *)(lVar10 + (ulong)uVar6 * 0xc0 + 0xb0));
                if ((uVar4 & 1) == 0) goto LAB_02f6b95c;
                lVar5 = param_1[2];
              }
              uVar4 = (**(code **)(**(long **)(lVar5 + 8) + 0x30))
                                (*(long **)(lVar5 + 8),5,lVar5 + 0x10,lVar8);
              if ((uVar4 & 1) == 0) goto LAB_02f6b95c;
              lVar5 = param_1[2];
            }
            lVar10 = lVar10 + (ulong)uVar6 * 0xc0;
            uStack_d8 = *(undefined8 *)(lVar10 + 0x78);
            local_80[0] = *(undefined2 *)(lVar10 + 0x8a);
            local_7c = *(undefined4 *)(lVar10 + 0x8c);
            local_78 = *(undefined8 *)(lVar10 + 0x98);
            local_c8 = 0xffffffff;
            local_c4 = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            local_ac = 0;
            local_d0 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_e0 = lVar8;
            local_a0 = auVar12._0_8_;
            uStack_98 = auVar12._8_8_;
            uStack_c0 = lVar8;
            FUN_02ffa204(*param_1,lVar5,param_1 + 4,uStack_d8,local_80,&local_e0,param_1[0x10]);
            uVar11 = NEON_fmax(*(undefined8 *)(param_1[0x10] + 0x10),0,4);
            fVar2 = (float)((ulong)uVar11 >> 0x20);
            *param_4 = CONCAT44(fVar2 * fVar2,(float)uVar11 * (float)uVar11);
            *(bool *)(param_1 + 0x11) = *(char *)(param_1[0x10] + 0x18) != '\0';
          }
        }
      }
LAB_02f6b95c:
      iVar9 = iVar9 + 1;
    } while (param_3 != iVar9);
  }
  return;
}


