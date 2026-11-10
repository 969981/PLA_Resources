/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030148e8; name: FUN_030148e8
 */


void FUN_030148e8(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong *puVar2;
  char *__s;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  size_t sVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  float fVar17;
  
  puVar5 = PTR_PTR_0434a080;
  iVar3 = (int)((ulong)(param_3 - param_2) >> 4) * -0x33333333;
  if (iVar3 != 0) {
    iVar9 = 0;
    lVar4 = tpidr_el0;
    do {
      lVar16 = (long)iVar9;
      lVar14 = *param_1;
      lVar10 = (lVar16 + (long)iVar9 * 4) * 0x10;
      puVar15 = (ulong *)(param_2 + lVar10);
      puVar2 = (ulong *)(lVar14 + lVar10);
      fVar17 = *(float *)(puVar2 + 5);
      if (0.0 <= *(float *)(puVar15 + 5)) {
        if (0.0 <= fVar17) {
          FUN_03012b94(puVar2);
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar11 = 0;
          __s = (char *)(*puVar15 & 0xfffffffffffffffe);
          if (__s != (char *)0x0) {
            sVar7 = strlen(__s);
            uVar1 = (int)sVar7 + 1;
            puVar8 = (undefined8 *)
                     (**(code **)(*(long *)puVar5 + 0x10))
                               (puVar5,(long)((sVar7 << 0x20) + 0x1100000000) >> 0x20,0);
            *puVar8 = puVar5;
            *(uint *)(puVar8 + 1) = uVar1;
            memcpy(puVar8 + 2,__s,(ulong)uVar1);
            uVar11 = puVar2[1];
            *puVar2 = (ulong)(puVar8 + 2) | 1;
          }
          puVar15 = (ulong *)(param_2 + lVar16 * 0x50 + 8);
          uVar12 = *puVar15;
          if (uVar11 != uVar12) {
            uVar13 = 0;
            if (uVar12 != 0) {
              FUN_032d645c(uVar12);
              uVar11 = puVar2[1];
              uVar13 = *puVar15;
            }
            puVar2[1] = uVar13;
            if (uVar11 != 0) {
              FUN_032d647c();
            }
          }
          lVar10 = param_2 + lVar16 * 0x50;
          uVar11 = *(ulong *)(lVar10 + 0x10);
          uVar12 = *(ulong *)(lVar10 + 0x18);
          uVar13 = *(ulong *)(lVar10 + 0x28);
          puVar2[4] = *(ulong *)(lVar10 + 0x20);
          puVar2[5] = uVar13;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          uVar11 = *(ulong *)(lVar10 + 0x30);
          uVar12 = *(ulong *)(lVar10 + 0x38);
          uVar13 = *(ulong *)(lVar10 + 0x48);
          puVar2[8] = *(ulong *)(lVar10 + 0x40);
          puVar2[9] = uVar13;
          puVar2[6] = uVar11;
          puVar2[7] = uVar12;
        }
      }
      else {
        if (0.0 <= fVar17) {
          if (*(long *)(lVar14 + lVar16 * 0x50 + 8) == 0) {
            uVar11 = *puVar2;
          }
          else {
            FUN_032d647c();
            uVar11 = *puVar2;
          }
          if ((uVar11 & 1) != 0) {
            lVar10 = *(long *)(lVar4 + 0x38d490);
            if (lVar10 == 0) {
              lVar10 = FUN_0333d16c(0,1);
              *(long *)(lVar4 + 0x38d490) = lVar10;
            }
            plVar6 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
            *(undefined8 *)(uVar11 - 0x11) = 0;
            (**(code **)(*plVar6 + 0x18))
                      (plVar6,(undefined8 *)(uVar11 - 0x11),(long)*(int *)(uVar11 - 9) + 0x10);
          }
          lVar10 = lVar14 + lVar16 * 0x50;
          puVar2[8] = 0;
          puVar2[9] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined2 *)(lVar10 + 0x20) = 0x201;
          *(undefined4 *)(lVar10 + 0x2c) = 0x3f800000;
          *(undefined4 *)(lVar10 + 0x24) = 0x3d4ccccd;
          *(undefined2 *)(lVar10 + 0x32) = 0x3f80;
          *(undefined4 *)(lVar10 + 0x1a) = 0x3f003f00;
          *(undefined1 *)(lVar10 + 0x30) = 0;
          *(undefined2 *)(lVar10 + 0x3a) = 0x40a0;
          *(float *)(puVar2 + 5) = -1.0;
        }
        *(undefined4 *)(lVar14 + lVar16 * 0x50 + 0x10) =
             *(undefined4 *)(param_2 + lVar16 * 0x50 + 0x10);
      }
      iVar9 = iVar9 + 1;
    } while (iVar3 != iVar9);
  }
  return;
}


