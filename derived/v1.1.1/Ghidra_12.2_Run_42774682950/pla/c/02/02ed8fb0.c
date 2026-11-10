/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed8fb0; name: FUN_02ed8fb0
 */


void FUN_02ed8fb0(long param_1,long param_2,ulong *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  uVar8 = 0;
  lVar7 = param_1;
  if ((*(uint *)(param_1 + 0xaa) & 0x20000) == 0) {
    lVar7 = 0;
  }
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0xaa) >> 0x11 & 1) == 0)) {
    uVar8 = 0;
    if ((param_4 & 1) == 0) {
      do {
        if ((*param_3 & (uVar8 ^ 0xffffffffffffffff)) == 0) break;
        lVar9 = *(long *)(param_1 + 0x38);
        if (lVar9 == 0) {
LAB_02ed9190:
          lVar9 = *(long *)(param_1 + 0x28);
        }
        else {
          uVar1 = FUN_02ee8670(lVar9 + 0x10,param_2);
          if (((uVar1 & 1) == 0) || (*(int *)(lVar9 + 0x18) != 0)) {
            puVar2 = *(undefined8 **)(param_1 + 0x38);
          }
          else {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
            puVar2 = *(undefined8 **)(param_1 + 0x38);
          }
          if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 3) != 0)) goto LAB_02ed9190;
          FUN_02ee2b44(DAT_0440a160,param_1 + 0x30,*puVar2);
          lVar9 = *(long *)(param_1 + 0x28);
        }
        if (lVar9 != 0) {
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 != 0) {
            puVar6 = *(undefined8 **)(lVar9 + 0x10);
            puVar2 = puVar6 + 3;
            uVar1 = (ulong)uVar3;
            puVar5 = puVar6;
LAB_02ed91cc:
            puVar4 = puVar5 + 2;
            if (puVar5[1] != param_2) goto code_r0x02ed91d8;
            if (puVar5 < puVar6 + (ulong)uVar3 * 2 + -2) {
              *puVar5 = *puVar4;
              puVar5[1] = puVar5[3];
              while (puVar4 < puVar6 + (ulong)uVar3 * 2 + -2) {
                puVar4 = puVar2 + 1;
                puVar2[-1] = *puVar4;
                *puVar2 = puVar2[2];
                puVar2 = puVar2 + 2;
              }
              uVar3 = *(uint *)(lVar9 + 0x18);
            }
            *(uint *)(lVar9 + 0x18) = uVar3 - 1;
            lVar9 = *(long *)(param_1 + 0x50);
            goto joined_r0x02ed919c;
          }
        }
LAB_02ed9198:
        lVar9 = *(long *)(param_1 + 0x50);
joined_r0x02ed919c:
        if (lVar9 != 0) {
          uVar1 = FUN_02ee8670(lVar9 + 0x10,param_2);
          if (((uVar1 & 1) == 0) || (*(int *)(lVar9 + 0x18) != 0)) {
            puVar2 = *(undefined8 **)(param_1 + 0x50);
          }
          else {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
            puVar2 = *(undefined8 **)(param_1 + 0x50);
          }
          if ((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 3) == 0)) {
            FUN_02ee2b44(DAT_0440a160,param_1 + 0x48,*puVar2);
          }
        }
        uVar8 = uVar8 | (ulong)*(uint *)(param_1 + 0xa0) << 0x11;
        param_1 = *(long *)(param_1 + 0x80);
      } while (param_1 != 0);
    }
    else {
      do {
        if ((*param_3 & (uVar8 ^ 0xffffffffffffffff)) == 0) break;
        lVar9 = *(long *)(param_1 + 0x38);
        if (lVar9 == 0) {
LAB_02ed9014:
          lVar9 = *(long *)(param_1 + 0x28);
        }
        else {
          uVar1 = FUN_02ee8670(lVar9 + 0x10,param_2);
          if (((uVar1 & 1) == 0) || (*(int *)(lVar9 + 0x18) != 0)) {
            puVar2 = *(undefined8 **)(param_1 + 0x38);
          }
          else {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
            puVar2 = *(undefined8 **)(param_1 + 0x38);
          }
          if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 3) != 0)) goto LAB_02ed9014;
          FUN_02ee2b44(DAT_0440a160,param_1 + 0x30,*puVar2);
          lVar9 = *(long *)(param_1 + 0x28);
        }
        if (lVar9 != 0) {
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 != 0) {
            puVar6 = *(undefined8 **)(lVar9 + 0x10);
            puVar2 = puVar6 + 3;
            uVar1 = (ulong)uVar3;
            puVar5 = puVar6;
LAB_02ed9058:
            puVar4 = puVar5 + 2;
            if (puVar5[1] != param_2) goto code_r0x02ed9064;
            puVar6 = puVar6 + (ulong)uVar3 * 2 + -2;
            if (puVar5 < puVar6) {
              *puVar5 = *puVar4;
              puVar5[1] = puVar5[3];
              if (puVar4 < puVar6) {
                do {
                  puVar5 = puVar2 + 1;
                  puVar2[-1] = *puVar5;
                  *puVar2 = puVar2[2];
                  puVar2 = puVar2 + 2;
                } while (puVar5 < puVar6);
              }
              uVar3 = *(uint *)(lVar9 + 0x18);
            }
            *(uint *)(lVar9 + 0x18) = uVar3 - 1;
            lVar9 = *(long *)(param_1 + 0x50);
            goto joined_r0x02ed9138;
          }
        }
LAB_02ed901c:
        lVar9 = *(long *)(param_1 + 0x50);
joined_r0x02ed9138:
        if (lVar9 != 0) {
          uVar1 = FUN_02ee8670(lVar9 + 0x10,param_2);
          if (((uVar1 & 1) == 0) || (*(int *)(lVar9 + 0x18) != 0)) {
            puVar2 = *(undefined8 **)(param_1 + 0x50);
          }
          else {
            *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
            puVar2 = *(undefined8 **)(param_1 + 0x50);
          }
          if ((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 3) == 0)) {
            FUN_02ee2b44(DAT_0440a160,param_1 + 0x48,*puVar2);
          }
        }
        uVar8 = uVar8 | (ulong)*(uint *)(param_1 + 0xa0) << 0x11;
        if (lVar7 == 0) {
          lVar7 = *(long *)(param_1 + 0x88);
        }
        param_1 = *(long *)(param_1 + 0x80);
      } while (param_1 != 0);
    }
  }
  do {
    if ((lVar7 == 0) || ((((uVar8 | 0x3800000100bf) ^ 0xffffc7fffffeff40) & *param_3) == 0)) {
      return;
    }
    lVar9 = *(long *)(lVar7 + 0x38);
    if (lVar9 == 0) {
LAB_02ed9284:
      lVar9 = *(long *)(lVar7 + 0x28);
    }
    else {
      uVar1 = FUN_02ee8670(lVar9 + 0x10,param_2);
      if (((uVar1 & 1) == 0) || (*(int *)(lVar9 + 0x18) != 0)) {
        puVar2 = *(undefined8 **)(lVar7 + 0x38);
      }
      else {
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
        puVar2 = *(undefined8 **)(lVar7 + 0x38);
      }
      if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 3) != 0)) goto LAB_02ed9284;
      FUN_02ee2b44(DAT_0440a160,lVar7 + 0x30,*puVar2);
      lVar9 = *(long *)(lVar7 + 0x28);
    }
    if (lVar9 != 0) {
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (uVar3 != 0) {
        puVar6 = *(undefined8 **)(lVar9 + 0x10);
        puVar2 = puVar6 + 3;
        uVar1 = (ulong)uVar3;
        puVar5 = puVar6;
LAB_02ed92c8:
        puVar4 = puVar5 + 2;
        if (puVar5[1] != param_2) goto code_r0x02ed92d4;
        if (puVar5 < puVar6 + (ulong)uVar3 * 2 + -2) {
          *puVar5 = *puVar4;
          puVar5[1] = puVar5[3];
          while (puVar4 < puVar6 + (ulong)uVar3 * 2 + -2) {
            puVar4 = puVar2 + 1;
            puVar2[-1] = *puVar4;
            *puVar2 = puVar2[2];
            puVar2 = puVar2 + 2;
          }
          uVar3 = *(uint *)(lVar9 + 0x18);
        }
        *(uint *)(lVar9 + 0x18) = uVar3 - 1;
        lVar9 = *(long *)(lVar7 + 0x178);
        if (lVar9 != 0) goto LAB_02ed930c;
        goto LAB_02ed9294;
      }
    }
LAB_02ed928c:
    lVar9 = *(long *)(lVar7 + 0x178);
    if (lVar9 == 0) {
LAB_02ed9294:
      lVar9 = *(long *)(lVar7 + 0x50);
    }
    else {
LAB_02ed930c:
      uVar1 = FUN_02ee8670(lVar9 + 0x10,param_2);
      if (((uVar1 & 1) == 0) || (*(int *)(lVar9 + 0x18) != 0)) {
        puVar2 = *(undefined8 **)(lVar7 + 0x178);
      }
      else {
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
        puVar2 = *(undefined8 **)(lVar7 + 0x178);
      }
      if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 3) != 0)) goto LAB_02ed9294;
      FUN_02ee2b44(DAT_0440a160,lVar7 + 0x170,*puVar2);
      lVar9 = *(long *)(lVar7 + 0x50);
    }
    if (lVar9 != 0) {
      uVar1 = FUN_02ee8670(lVar9 + 0x10,param_2);
      if (((uVar1 & 1) == 0) || (*(int *)(lVar9 + 0x18) != 0)) {
        puVar2 = *(undefined8 **)(lVar7 + 0x50);
      }
      else {
        *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
        puVar2 = *(undefined8 **)(lVar7 + 0x50);
      }
      if ((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 3) == 0)) {
        FUN_02ee2b44(DAT_0440a160,lVar7 + 0x48,*puVar2);
      }
    }
    uVar8 = uVar8 | (ulong)*(uint *)(lVar7 + 0xa0) << 0x11;
    lVar7 = *(long *)(lVar7 + 0x88);
  } while( true );
code_r0x02ed91d8:
  uVar1 = uVar1 - 1;
  puVar2 = puVar2 + 2;
  puVar5 = puVar4;
  if (uVar1 == 0) goto LAB_02ed9198;
  goto LAB_02ed91cc;
code_r0x02ed9064:
  uVar1 = uVar1 - 1;
  puVar2 = puVar2 + 2;
  puVar5 = puVar4;
  if (uVar1 == 0) goto LAB_02ed901c;
  goto LAB_02ed9058;
code_r0x02ed92d4:
  uVar1 = uVar1 - 1;
  puVar2 = puVar2 + 2;
  puVar5 = puVar4;
  if (uVar1 == 0) goto LAB_02ed928c;
  goto LAB_02ed92c8;
}


