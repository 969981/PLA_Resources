/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5a74c; name: FUN_00d5a74c
 */


undefined8 FUN_00d5a74c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  bool bVar14;
  long lVar15;
  float fVar16;
  long local_90 [3];
  long *local_78;
  
  uVar9 = (uint)*(byte *)(param_1 + 0x6ef);
  if (*(byte *)(param_1 + 0x6ef) != 0) {
    uVar6 = (uint)*(byte *)(param_1 + 0x6ee);
    uVar13 = 0;
    do {
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar9 = 0;
        do {
          FUN_00d5c20c(local_90,uVar9 + uVar6 * uVar13);
          plVar4 = local_78;
          lVar11 = local_90[0];
          lVar15 = *(long *)(param_1 + 0x2c8);
          if (lVar15 == 0) {
            bVar14 = true;
            goto joined_r0x00d5a954;
          }
          plVar7 = *(long **)(lVar15 + 0x1a0);
          lVar2 = *(long *)(lVar15 + 0x1a8);
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x18))(local_78);
          }
          plVar3 = plVar7;
          if ((lVar2 != 0) && (*plVar7 != lVar11)) {
            lVar10 = lVar2 * 0x30;
            plVar12 = plVar7 + lVar2 * 6;
            do {
              lVar10 = lVar10 + -0x30;
              plVar3 = plVar12;
              if (lVar10 == 0) break;
              plVar1 = plVar7 + 6;
              plVar7 = plVar7 + 6;
              plVar3 = plVar7;
            } while (*plVar1 != lVar11);
          }
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x20))(plVar4);
          }
          plVar7 = (long *)(*(long *)(lVar15 + 0x1a0) + *(long *)(lVar15 + 0x1a8) * 0x30);
          if (plVar3 == plVar7) {
            plVar12 = (long *)0x0;
            if (plVar3 != plVar7) goto LAB_00d5a828;
LAB_00d5a87c:
            bVar14 = true;
          }
          else {
            plVar12 = plVar3 + 4;
            if (plVar3 == plVar7) goto LAB_00d5a87c;
LAB_00d5a828:
            uVar8 = (ulong)*(uint *)(plVar12 + 1);
            if (((*(uint *)(*plVar12 + 0x278) <= *(uint *)(plVar12 + 1)) ||
                (lVar11 = *(long *)(*plVar12 + 600), *(char *)(lVar11 + uVar8 * 0x48 + 8) == '\0'))
               || (*(char *)(lVar11 + uVar8 * 0x48 + 0xb) == '\0')) goto LAB_00d5a87c;
            plVar7 = (long *)(lVar11 + uVar8 * 0x48 + 0x10);
            lVar15 = *plVar7;
            if ((lVar15 == 0) || (*(char *)(lVar11 + uVar8 * 0x48 + 9) != '\0')) {
              bVar14 = false;
            }
            else {
              fVar16 = *(float *)(lVar15 + 0x20);
              uVar5 = FUN_00227728();
              uVar8 = FUN_00227744(*plVar7);
              bVar14 = false;
              if (((float)uVar5 <= fVar16) && ((uVar8 & 1) == 0)) goto LAB_00d5a87c;
            }
          }
joined_r0x00d5a954:
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x20))(plVar4);
          }
          if (!bVar14) {
            return 0;
          }
          uVar6 = (uint)*(byte *)(param_1 + 0x6ee);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
        uVar9 = (uint)*(byte *)(param_1 + 0x6ef);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar9);
  }
  return 1;
}


