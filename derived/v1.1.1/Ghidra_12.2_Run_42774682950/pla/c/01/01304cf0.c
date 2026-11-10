/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01304cf0; name: FUN_01304cf0
 */


bool FUN_01304cf0(ushort *param_1,ushort *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ushort *puVar17;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  
  switch(((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    puVar10 = param_2 + -0x18;
    if (*puVar10 < *param_1) {
      uVar11 = *(undefined8 *)param_1;
      uVar16 = *(undefined8 *)(param_1 + 4);
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined8 *)(param_1 + 0xc);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x14);
      uVar15 = *(undefined8 *)(param_2 + -0x10);
      uVar3 = *(undefined8 *)(param_2 + -0xc);
      uVar4 = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_1 + 0x14) = uVar4;
      *(undefined8 *)(param_1 + 8) = uVar15;
      *(undefined8 *)(param_1 + 0xc) = uVar3;
      uVar15 = *(undefined8 *)(param_2 + -0x14);
      *(undefined8 *)param_1 = *(undefined8 *)puVar10;
      *(undefined8 *)(param_1 + 4) = uVar15;
      *(undefined8 *)puVar10 = uVar11;
      *(undefined8 *)(param_2 + -0x14) = uVar16;
      *(undefined8 *)(param_2 + -8) = uVar14;
      *(undefined8 *)(param_2 + -4) = uVar2;
      *(undefined8 *)(param_2 + -0x10) = uVar12;
      *(undefined8 *)(param_2 + -0xc) = uVar1;
      return true;
    }
    break;
  case 3:
    FUN_013046b0(param_1,param_1 + 0x18,param_2 + -0x18);
    break;
  case 4:
    FUN_013048a0(param_1,param_1 + 0x18,param_1 + 0x30,param_2 + -0x18);
    break;
  case 5:
    FUN_01304a00(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2 + -0x18);
    break;
  default:
    FUN_013046b0(param_1,param_1 + 0x18,param_1 + 0x30);
    if (param_1 + 0x48 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar10 = param_1 + 0x48;
      puVar17 = param_1 + 0x30;
      do {
        puVar9 = puVar10;
        uVar5 = *puVar9;
        if (uVar5 < *puVar17) {
          uVar11 = *(undefined8 *)(puVar9 + 1);
          uVar14 = *(undefined8 *)(puVar9 + 5);
          uVar12 = *(undefined8 *)(puVar9 + 9);
          uVar15 = *(undefined8 *)(puVar9 + 0xd);
          uVar16 = *(undefined8 *)(puVar9 + 0x11);
          uStack_38 = (undefined6)((ulong)*(undefined8 *)(puVar9 + 0x14) >> 0x10);
          uStack_3a = (undefined2)((ulong)uVar16 >> 0x30);
          lVar6 = lVar7;
          do {
            lVar13 = lVar6;
            *(undefined8 *)((long)param_1 + lVar13 + 0xa0) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x70);
            *(undefined8 *)((long)param_1 + lVar13 + 0xa8) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x78);
            *(undefined8 *)((long)param_1 + lVar13 + 0xb0) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x80);
            *(undefined8 *)((long)param_1 + lVar13 + 0xb8) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x88);
            *(undefined8 *)((long)param_1 + lVar13 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x60);
            *(undefined8 *)((long)param_1 + lVar13 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar13 + 0x68);
            if (lVar13 == -0x60) {
              puVar10 = param_1;
              goto LAB_01304dd4;
            }
            lVar6 = lVar13 + -0x30;
          } while (uVar5 < *(ushort *)((long)param_1 + lVar13 + 0x30));
          puVar10 = (ushort *)((long)param_1 + lVar13 + 0x60);
LAB_01304dd4:
          *puVar10 = uVar5;
          *(undefined8 *)(puVar10 + 5) = uVar14;
          *(undefined8 *)(puVar10 + 1) = uVar11;
          iVar8 = iVar8 + 1;
          *(ulong *)(puVar10 + 0x14) = CONCAT62(uStack_38,uStack_3a);
          *(undefined8 *)(puVar10 + 0x11) = uVar16;
          *(undefined8 *)(puVar10 + 0xd) = uVar15;
          *(undefined8 *)(puVar10 + 9) = uVar12;
          if (iVar8 == 8) {
            return puVar9 + 0x18 == param_2;
          }
        }
        lVar7 = lVar7 + 0x30;
        puVar10 = puVar9 + 0x18;
        puVar17 = puVar9;
      } while (puVar9 + 0x18 != param_2);
    }
  }
  return true;
}


