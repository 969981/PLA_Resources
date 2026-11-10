/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00563e24; name: FUN_00563e24
 */


void FUN_00563e24(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *__src;
  size_t __n;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  
  if (param_2 < 0) {
    return;
  }
  uVar19 = 0;
  pbVar13 = (byte *)0x0;
  uVar20 = 0;
  lVar14 = (long)param_2;
  if (0 < lVar14) goto LAB_00563eb0;
LAB_00563f10:
  pbVar18 = (byte *)0x0;
  pbVar17 = pbVar13;
  do {
    uVar5 = 0xaaaaaaaaaaaaaaa;
    if ((uVar19 != uVar20) && (uVar19 != uVar20 + 1)) {
      uVar6 = FUN_0055dbac(pbVar17);
      uVar15 = (ulong)(int)uVar20;
      uVar16 = uVar15;
      if ((long)uVar15 < (long)uVar19) {
        do {
          lVar21 = uVar16 * 8;
          uVar7 = FUN_005630a0(*(undefined8 *)(param_1 + lVar21));
          uVar16 = uVar16 + 1;
          *(undefined8 *)(param_1 + lVar21) = uVar7;
        } while (uVar19 != (uVar16 & 0xffffffff));
      }
      puVar8 = (undefined8 *)param_4[1];
      lVar21 = param_1 + uVar15 * 8;
      iVar3 = (uint)uVar19 - uVar20;
      if (puVar8 < (undefined8 *)param_4[2]) {
        *puVar8 = uVar6;
        puVar8[1] = lVar21;
        *(int *)(puVar8 + 2) = iVar3;
        *(undefined4 *)((long)puVar8 + 0x14) = 0xffffffff;
        param_4[1] = (long)(puVar8 + 3);
      }
      else {
        __src = (void *)*param_4;
        lVar10 = (long)puVar8 - (long)__src >> 3;
        uVar16 = lVar10 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar16) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar12 = param_4[2] - (long)__src >> 3;
        if ((ulong)(lVar12 * -0x5555555555555555) < 0x555555555555555) {
          uVar15 = lVar12 * 0x5555555555555556;
          uVar5 = uVar16;
          if (uVar16 <= uVar15) {
            uVar5 = uVar15;
          }
          if (uVar5 != 0) goto LAB_00563fc8;
          lVar12 = 0;
        }
        else {
LAB_00563fc8:
          lVar12 = FUN_002e2e80(PTR_FUN_04373078,uVar5 * 0x18);
          __src = (void *)*param_4;
          puVar8 = (undefined8 *)param_4[1];
        }
        puVar11 = (undefined8 *)(lVar12 + lVar10 * 8);
        __n = (long)puVar8 - (long)__src;
        *puVar11 = uVar6;
        puVar11[1] = lVar21;
        *(int *)(puVar11 + 2) = iVar3;
        *(undefined4 *)((long)puVar11 + 0x14) = 0xffffffff;
        if (0 < (long)__n) {
          memcpy((void *)((long)puVar11 - __n),__src,__n);
        }
        lVar21 = *param_4;
        param_4[2] = lVar12 + uVar5 * 0x18;
        *param_4 = (long)((long)puVar11 - __n);
        param_4[1] = (long)(puVar11 + 3);
        if (lVar21 != 0) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
    }
    pbVar13 = pbVar18;
    uVar4 = (uint)uVar19;
    if (lVar14 <= (long)uVar19) {
      pbVar13 = pbVar17;
      uVar4 = uVar20;
    }
    uVar20 = uVar4;
    do {
      uVar19 = uVar19 + 1;
      if (uVar19 == param_2 + 1) {
        return;
      }
      if (lVar14 <= (long)uVar19) goto LAB_00563f10;
LAB_00563eb0:
      pbVar17 = *(byte **)(param_1 + uVar19 * 8);
      if (*pbVar17 == 2) {
        pbVar18 = (byte *)0x0;
      }
      else {
        pbVar18 = pbVar17;
        if ((*pbVar17 == 5) && (1 < *(ushort *)(pbVar17 + 6))) {
          pbVar18 = (byte *)0x0;
          if (*(byte *)**(undefined8 **)(pbVar17 + 8) != 2) {
            pbVar18 = (byte *)**(undefined8 **)(pbVar17 + 8);
          }
        }
      }
      pbVar17 = pbVar13;
      if (pbVar13 == (byte *)0x0) break;
      if (8 < *pbVar13 - 0xc) {
        if ((*pbVar13 != 10) || (*(int *)(pbVar13 + 0x1c) != *(int *)(pbVar13 + 0x18))) break;
        uVar2 = *(ushort *)(pbVar13 + 6);
        pbVar9 = pbVar13 + 8;
        if (uVar2 < 2) {
          cVar1 = **(char **)pbVar9;
        }
        else {
          cVar1 = *(char *)**(undefined8 **)pbVar9;
        }
        if (cVar1 != '\x03') {
          if (uVar2 < 2) {
            cVar1 = **(char **)pbVar9;
          }
          else {
            cVar1 = *(char *)**(undefined8 **)pbVar9;
          }
          if (cVar1 != '\x14') {
            if (uVar2 < 2) {
              cVar1 = **(char **)pbVar9;
            }
            else {
              cVar1 = *(char *)**(undefined8 **)pbVar9;
            }
            if (cVar1 != '\f') {
              if (1 < uVar2) {
                pbVar9 = *(byte **)pbVar9;
              }
              if (**(char **)pbVar9 != '\r') break;
            }
          }
        }
      }
      uVar5 = FUN_0055eca4(pbVar13,pbVar18);
    } while ((uVar5 & 1) != 0);
  } while( true );
}


