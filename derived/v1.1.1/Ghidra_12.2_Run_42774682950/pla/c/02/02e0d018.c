/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0d018; name: FUN_02e0d018
 */


void FUN_02e0d018(long param_1,long *param_2)

{
  float *__s;
  float *pfVar1;
  float *__dest;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  float *__src;
  void *pvVar16;
  byte bVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  float *pfVar21;
  void *__s_00;
  long lVar22;
  uint *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  uint *puVar26;
  float *pfVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float *pfVar30;
  int iVar31;
  uint uVar32;
  float *pfVar33;
  ulong uVar34;
  float *pfVar35;
  ulong uVar36;
  float *pfVar37;
  undefined8 *puVar38;
  ulong *puVar39;
  long lVar40;
  float *pfVar41;
  uint uVar42;
  int *piVar43;
  long *plVar44;
  ulong uVar45;
  undefined4 *puVar46;
  byte bVar47;
  uint uVar48;
  ulong uVar49;
  uint uVar50;
  ulong uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  ulong uVar65;
  float fVar66;
  undefined8 uVar67;
  ulong uVar68;
  undefined8 uVar69;
  ulong uVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  ulong uVar74;
  undefined8 uVar75;
  ulong uVar76;
  undefined8 uVar77;
  ulong uVar78;
  undefined8 uVar79;
  ulong uVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  ulong uVar84;
  undefined8 uVar85;
  ulong uVar86;
  undefined8 uVar87;
  ulong uVar88;
  undefined8 uVar89;
  ulong uVar90;
  undefined8 uVar91;
  ulong uVar92;
  undefined8 uVar93;
  ulong uVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float *local_a8 [3];
  
  lVar19 = *(long *)(param_1 + 0x158);
  if (*(char *)(lVar19 + 0x9a) == '\0') {
    cVar10 = *(char *)(lVar19 + 0x58);
  }
  else {
    iVar15 = *(int *)(lVar19 + 0x74);
    if (((*(int *)(param_1 + 0x1d4) != iVar15) ||
        (*(float *)(param_1 + 0x1d0) != *(float *)(lVar19 + 0x70))) ||
       (*(float *)(param_1 + 0x1cc) != *(float *)(lVar19 + 0x6c))) {
      plVar44 = *(long **)(param_1 + 0x160);
      puVar46 = *(undefined4 **)(param_1 + 0x140);
      if (puVar46 != (undefined4 *)0x0) {
        if (*(int *)(param_1 + 0x128) != 0) {
          if (*(long *)(puVar46 + 2) != 0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
            *(undefined8 *)(puVar46 + 2) = 0;
          }
          *puVar46 = 0;
          if (*(long *)(puVar46 + 8) != 0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
            *(undefined8 *)(puVar46 + 8) = 0;
          }
          puVar46[6] = 0;
          if (*(long *)(puVar46 + 0xe) != 0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
            *(undefined8 *)(puVar46 + 0xe) = 0;
          }
          puVar46[0xc] = 0;
          if (*(long *)(puVar46 + 0x14) != 0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
            *(undefined8 *)(puVar46 + 0x14) = 0;
          }
          puVar46[0x12] = 0;
          lVar19 = *(long *)(param_1 + 0x140);
          if (*(long *)(lVar19 + 0x98) != 0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
            *(undefined8 *)(lVar19 + 0x98) = 0;
          }
          *(undefined4 *)(lVar19 + 0x90) = 0;
          if (1 < *(uint *)(param_1 + 0x128)) {
            uVar25 = 1;
            lVar19 = 0x140;
            do {
              lVar22 = *(long *)(param_1 + 0x140) + lVar19;
              if (*(long *)(lVar22 + -0x90) != 0) {
                (**(code **)(*plVar44 + 0x18))(plVar44);
                *(undefined8 *)(lVar22 + -0x90) = 0;
              }
              *(undefined4 *)(lVar22 + -0x98) = 0;
              if (*(long *)(lVar22 + -0x78) != 0) {
                (**(code **)(*plVar44 + 0x18))(plVar44);
                *(undefined8 *)(lVar22 + -0x78) = 0;
              }
              *(undefined4 *)(lVar22 + -0x80) = 0;
              if (*(long *)(lVar22 + -0x60) != 0) {
                (**(code **)(*plVar44 + 0x18))(plVar44);
                *(undefined8 *)(lVar22 + -0x60) = 0;
              }
              *(undefined4 *)(lVar22 + -0x68) = 0;
              if (*(long *)(lVar22 + -0x48) != 0) {
                (**(code **)(*plVar44 + 0x18))(plVar44);
                *(undefined8 *)(lVar22 + -0x48) = 0;
              }
              *(undefined4 *)(lVar22 + -0x50) = 0;
              lVar22 = *(long *)(param_1 + 0x140);
              if (*(long *)(lVar22 + lVar19) != 0) {
                (**(code **)(*plVar44 + 0x18))(plVar44);
                *(undefined8 *)(lVar22 + lVar19) = 0;
              }
              lVar22 = lVar22 + lVar19;
              lVar19 = lVar19 + 0xa8;
              *(undefined4 *)(lVar22 + -8) = 0;
              uVar25 = uVar25 + 1;
            } while (uVar25 < *(uint *)(param_1 + 0x128));
          }
          puVar46 = *(undefined4 **)(param_1 + 0x140);
        }
        (**(code **)(*plVar44 + 0x18))(plVar44,puVar46);
        plVar44 = *(long **)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0x140) = 0;
        iVar15 = *(int *)(*(long *)(param_1 + 0x158) + 0x74);
      }
      *(int *)(param_1 + 0x128) = iVar15;
      iVar15 = FUN_02e0b9fc(param_1,plVar44);
      if (iVar15 != 1) {
        return;
      }
      piVar43 = *(int **)(param_1 + 0x140);
      if ((piVar43 != (int *)0x0) && (*(int *)(param_1 + 0x128) != 0)) {
        if (*(void **)(piVar43 + 2) != (void *)0x0) {
          memset(*(void **)(piVar43 + 2),0,(ulong)(uint)(*piVar43 << 2));
        }
        if (*(void **)(piVar43 + 8) != (void *)0x0) {
          memset(*(void **)(piVar43 + 8),0,(ulong)(uint)(piVar43[6] << 2));
        }
        if (*(void **)(piVar43 + 0xe) != (void *)0x0) {
          memset(*(void **)(piVar43 + 0xe),0,(ulong)(uint)(piVar43[0xc] << 2));
        }
        if (*(void **)(piVar43 + 0x14) != (void *)0x0) {
          memset(*(void **)(piVar43 + 0x14),0,(ulong)(uint)(piVar43[0x12] << 2));
        }
        piVar43[0x18] = 0;
        piVar43[0x1b] = 0;
        piVar43[0x1e] = 0;
        piVar43[0x21] = 0;
        pvVar16 = *(void **)(*(long *)(param_1 + 0x140) + 0x98);
        if (pvVar16 != (void *)0x0) {
          memset(pvVar16,0,(ulong)(uint)(*(int *)(*(long *)(param_1 + 0x140) + 0x90) << 2));
        }
        if (1 < *(uint *)(param_1 + 0x128)) {
          uVar25 = 1;
          lVar19 = 0x140;
          do {
            lVar22 = *(long *)(param_1 + 0x140) + lVar19;
            if (*(void **)(lVar22 + -0x90) != (void *)0x0) {
              memset(*(void **)(lVar22 + -0x90),0,(ulong)(uint)(*(int *)(lVar22 + -0x98) << 2));
            }
            if (*(void **)(lVar22 + -0x78) != (void *)0x0) {
              memset(*(void **)(lVar22 + -0x78),0,(ulong)(uint)(*(int *)(lVar22 + -0x80) << 2));
            }
            if (*(void **)(lVar22 + -0x60) != (void *)0x0) {
              memset(*(void **)(lVar22 + -0x60),0,(ulong)(uint)(*(int *)(lVar22 + -0x68) << 2));
            }
            if (*(void **)(lVar22 + -0x48) != (void *)0x0) {
              memset(*(void **)(lVar22 + -0x48),0,(ulong)(uint)(*(int *)(lVar22 + -0x50) << 2));
            }
            *(undefined4 *)(lVar22 + -0x38) = 0;
            *(undefined4 *)(lVar22 + -0x2c) = 0;
            *(undefined4 *)(lVar22 + -0x20) = 0;
            *(undefined4 *)(lVar22 + -0x14) = 0;
            pvVar16 = *(void **)(*(long *)(param_1 + 0x140) + lVar19);
            if (pvVar16 != (void *)0x0) {
              memset(pvVar16,0,
                     (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x140) + lVar19 + -8) << 2));
            }
            uVar25 = uVar25 + 1;
            lVar19 = lVar19 + 0xa8;
          } while (uVar25 < *(uint *)(param_1 + 0x128));
        }
      }
    }
    lVar19 = *(long *)(param_1 + 0x158);
    if (*(char *)(param_1 + 0x1f9) != *(char *)(lVar19 + 0x99)) {
      plVar44 = *(long **)(param_1 + 0x160);
      if (*(long *)(param_1 + 0xf0) != 0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        plVar44 = *(long **)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
      *(undefined4 *)(param_1 + 0xe8) = 0;
      if (*(long *)(param_1 + 0x108) != 0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        plVar44 = *(long **)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
      if (*(long *)(param_1 + 0xc0) != 0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        plVar44 = *(long **)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if ((*(char *)(param_1 + 0x138) != '\0') &&
         (puVar46 = *(undefined4 **)(param_1 + 0x150), puVar46 != (undefined4 *)0x0)) {
        if (*(long *)(puVar46 + 2) != 0) {
          (**(code **)(*plVar44 + 0x18))(plVar44);
          *(undefined8 *)(puVar46 + 2) = 0;
        }
        *puVar46 = 0;
        if (*(long *)(param_1 + 0x150) != 0) {
          (**(code **)(*plVar44 + 0x18))(plVar44);
        }
        *(undefined8 *)(param_1 + 0x150) = 0;
      }
      lVar19 = *(long *)(param_1 + 0x158);
      if ((*(char *)(lVar19 + 0x98) != '\0') &&
         ((((*(int *)(lVar19 + 0x80) != 0 || (*(int *)(lVar19 + 0x88) != 0)) ||
           (*(int *)(lVar19 + 0x90) != 0)) && (*(long *)(param_1 + 0x148) != 0)))) {
        (**(code **)(**(long **)(param_1 + 0x160) + 0x18))();
        lVar19 = *(long *)(param_1 + 0x158);
        *(undefined8 *)(param_1 + 0x148) = 0;
      }
      cVar10 = *(char *)(lVar19 + 0x99);
      *(char *)(param_1 + 0x138) = cVar10 << 1;
      uVar48 = *(uint *)(param_2 + 1);
      if ((uVar48 & 0xfffff000) == 0x8000) {
        *(undefined1 *)(param_1 + 0x138) = 0;
        pvVar16 = *(void **)(param_1 + 0xf0);
      }
      else {
        if (cVar10 != '\0') {
          fVar62 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
          uVar42 = (uint)(*(float *)(lVar19 + 0x68) * 0.001 * fVar62);
          if (uVar42 != 0) {
            plVar44 = *(long **)(param_1 + 0x160);
            uVar50 = uVar48 >> 8 & 0xf;
            if ((uVar50 == 2) || ((uVar50 == 1 && ((uVar48 & 0x210000) != 0)))) {
              if (uVar42 < 5) {
                uVar42 = 4;
              }
              *(uint *)(param_1 + 0xe8) = uVar42;
              uVar48 = uVar42 * 4 + 0xc & 0xfffffff0;
              lVar19 = (**(code **)(*plVar44 + 0x10))(plVar44,uVar48);
              *(long *)(param_1 + 0xf0) = lVar19;
              if (lVar19 == 0) {
                return;
              }
              *(undefined4 *)(param_1 + 0xf8) = 0;
              *(uint *)(param_1 + 0x100) = uVar42;
              lVar19 = (**(code **)(*plVar44 + 0x10))(plVar44,uVar48);
              *(long *)(param_1 + 0x108) = lVar19;
              if (lVar19 == 0) {
                return;
              }
              *(undefined4 *)(param_1 + 0x110) = 0;
              pvVar16 = *(void **)(param_1 + 0xf0);
              goto joined_r0x02e0fbc4;
            }
          }
        }
        pvVar16 = *(void **)(param_1 + 0xf0);
      }
joined_r0x02e0fbc4:
      if (pvVar16 != (void *)0x0) {
        memset(pvVar16,0,(ulong)(uint)(*(int *)(param_1 + 0xe8) << 2));
      }
      if (*(void **)(param_1 + 0x108) != (void *)0x0) {
        memset(*(void **)(param_1 + 0x108),0,(ulong)(uint)(*(int *)(param_1 + 0x100) << 2));
      }
      if (*(char *)(param_1 + 0x138) == '\0') {
LAB_02e0ef38:
        pvVar16 = *(void **)(param_1 + 0xc0);
      }
      else {
        lVar19 = *(long *)(param_1 + 0x158);
        plVar44 = *(long **)(param_1 + 0x160);
        fVar81 = exp2f(*(float *)(lVar19 + 100) * 0.01);
        uVar25 = (ulong)*(uint *)(lVar19 + 0x5c);
        fVar62 = *(float *)(&PTR_DAT_042a4ed0)[uVar25 * 5] * fVar81;
        if (*(float *)(&PTR_DAT_042a4ee0)[uVar25 * 5] * fVar81 <=
            *(float *)(&PTR_DAT_042a4ed0)[uVar25 * 5] * fVar81) {
          fVar62 = *(float *)(&PTR_DAT_042a4ee0)[uVar25 * 5] * fVar81;
        }
        fVar81 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
        uVar48 = (uint)(fVar81 * fVar62 * 0.001);
        if (uVar48 == 0) goto LAB_02e0ef38;
        if (uVar48 < 5) {
          uVar48 = 4;
        }
        *(uint *)(param_1 + 0xb8) = uVar48;
        pvVar16 = (void *)(**(code **)(*plVar44 + 0x10))(plVar44,uVar48 * 4 + 0xc & 0xfffffff0);
        *(void **)(param_1 + 0xc0) = pvVar16;
        if (pvVar16 == (void *)0x0) {
          return;
        }
        *(undefined4 *)(param_1 + 200) = 0;
      }
      if (pvVar16 != (void *)0x0) {
        memset(pvVar16,0,(ulong)(uint)(*(int *)(param_1 + 0xb8) << 2));
      }
      if (*(char *)(param_1 + 0x138) != '\0') {
        plVar44 = *(long **)(param_1 + 0x160);
        uVar25 = (ulong)*(uint *)(*(long *)(param_1 + 0x158) + 0x5c);
        puVar46 = (undefined4 *)(**(code **)(*plVar44 + 0x10))(plVar44,800);
        if (puVar46 == (undefined4 *)0x0) goto LAB_02e0effc;
        *puVar46 = 0;
        memset(puVar46 + 2,0,0x314);
        *(undefined4 **)(param_1 + 0x150) = puVar46;
        iVar15 = FUN_02e1f0dc(*(undefined4 *)(*(long *)(param_1 + 0x158) + 100),puVar46,plVar44,
                              (&PTR_DAT_042a4ed0)[uVar25 * 5],(&PTR_DAT_042a4ee0)[uVar25 * 5],
                              *(undefined4 *)(&DAT_042a4ec8 + uVar25 * 0x28),
                              *(undefined4 *)(&DAT_042a4ed8 + uVar25 * 0x28),
                              *(undefined4 *)(param_1 + 0x130));
        if (iVar15 != 1) {
          return;
        }
      }
      puVar23 = *(uint **)(param_1 + 0x150);
      if ((puVar23 != (uint *)0x0) && (*(void **)(puVar23 + 2) != (void *)0x0)) {
        memset(*(void **)(puVar23 + 2),0,(ulong)*puVar23 << 2);
      }
      lVar19 = *(long *)(param_1 + 0x158);
      if ((*(char *)(lVar19 + 0x98) != '\0') &&
         (((*(int *)(lVar19 + 0x80) != 0 || (*(int *)(lVar19 + 0x88) != 0)) ||
          (*(int *)(lVar19 + 0x90) != 0)))) {
        iVar15 = FUN_02e0b8a4(param_1);
        if (iVar15 != 1) {
          return;
        }
        lVar19 = *(long *)(param_1 + 0x158);
        if ((*(char *)(lVar19 + 0x98) != '\0') && (*(char *)(param_1 + 0x134) != '\0')) {
          lVar19 = *(long *)(param_1 + 0x148);
          *(undefined8 *)(lVar19 + 0x80) = 0;
          *(undefined8 *)(lVar19 + 0x88) = 0;
          if (1 < *(byte *)(param_1 + 0x134)) {
            lVar19 = *(long *)(param_1 + 0x148);
            *(undefined8 *)(lVar19 + 0x120) = 0;
            *(undefined8 *)(lVar19 + 0x128) = 0;
            if (2 < *(byte *)(param_1 + 0x134)) {
              uVar25 = 2;
              lVar19 = 0x1c0;
              do {
                puVar38 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar19);
                uVar25 = uVar25 + 1;
                *puVar38 = 0;
                puVar38[1] = 0;
                lVar19 = lVar19 + 0xa0;
              } while (uVar25 < *(byte *)(param_1 + 0x134));
            }
          }
          lVar19 = *(long *)(param_1 + 0x158);
        }
      }
    }
    if (*(float *)(param_1 + 0x1c8) != *(float *)(lVar19 + 0x68)) {
      plVar44 = *(long **)(param_1 + 0x160);
      if (*(long *)(param_1 + 0xf0) != 0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        plVar44 = *(long **)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0xf0) = 0;
      }
      *(undefined4 *)(param_1 + 0xe8) = 0;
      if (*(long *)(param_1 + 0x108) != 0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        plVar44 = *(long **)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0x108) = 0;
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
      if (*(char *)(param_1 + 0x138) == '\0') {
LAB_02e0f740:
        pvVar16 = (void *)0x0;
        __s_00 = *(void **)(param_1 + 0xf0);
      }
      else {
        fVar62 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
        uVar48 = (uint)(*(float *)(*(long *)(param_1 + 0x158) + 0x68) * 0.001 * fVar62);
        if (uVar48 == 0) goto LAB_02e0f740;
        uVar42 = *(uint *)(param_2 + 1) >> 8 & 0xf;
        if ((uVar42 != 2) && ((uVar42 != 1 || ((*(uint *)(param_2 + 1) & 0x210000) == 0))))
        goto LAB_02e0f740;
        if (uVar48 < 5) {
          uVar48 = 4;
        }
        *(uint *)(param_1 + 0xe8) = uVar48;
        uVar42 = uVar48 * 4 + 0xc & 0xfffffff0;
        lVar19 = (**(code **)(*plVar44 + 0x10))(plVar44,uVar42);
        *(long *)(param_1 + 0xf0) = lVar19;
        if (lVar19 == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0xf8) = 0;
        *(uint *)(param_1 + 0x100) = uVar48;
        pvVar16 = (void *)(**(code **)(*plVar44 + 0x10))(plVar44,uVar42);
        *(void **)(param_1 + 0x108) = pvVar16;
        if (pvVar16 == (void *)0x0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x110) = 0;
        __s_00 = *(void **)(param_1 + 0xf0);
      }
      if (__s_00 != (void *)0x0) {
        memset(__s_00,0,(ulong)(uint)(*(int *)(param_1 + 0xe8) << 2));
        pvVar16 = *(void **)(param_1 + 0x108);
      }
      if (pvVar16 != (void *)0x0) {
        memset(pvVar16,0,(ulong)(uint)(*(int *)(param_1 + 0x100) << 2));
      }
      lVar19 = *(long *)(param_1 + 0x158);
    }
    if (*(float *)(param_1 + 0x1c0) != *(float *)(lVar19 + 0x60)) {
      if (*(long *)(param_1 + 0xd8) != 0) {
        (**(code **)(**(long **)(param_1 + 0x160) + 0x18))();
        lVar19 = *(long *)(param_1 + 0x158);
        *(undefined8 *)(param_1 + 0xd8) = 0;
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      fVar62 = *(float *)(lVar19 + 0x60) * 0.001;
      fVar81 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      uVar48 = (uint)(fVar62 * fVar81);
      if (uVar48 != 0) {
        if (uVar48 < 5) {
          uVar48 = 4;
        }
        *(uint *)(param_1 + 0xd0) = uVar48;
        pvVar16 = (void *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                                    (*(long **)(param_1 + 0x160),uVar48 * 4 + 0xc & 0xfffffff0);
        *(void **)(param_1 + 0xd8) = pvVar16;
        if (pvVar16 == (void *)0x0) {
          return;
        }
        *(undefined4 *)(param_1 + 0xe0) = 0;
        memset(pvVar16,0,(ulong)(uint)(*(int *)(param_1 + 0xd0) << 2));
        lVar19 = *(long *)(param_1 + 0x158);
        fVar62 = *(float *)(lVar19 + 0x60) * 0.001;
        fVar81 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      }
      *(int *)(param_1 + 0x120) = (int)((fVar62 + *(float *)(lVar19 + 8)) * fVar81);
    }
    if ((*(int *)(param_1 + 0x1bc) != *(int *)(lVar19 + 0x5c)) ||
       (*(float *)(param_1 + 0x1c4) != *(float *)(lVar19 + 100))) {
      plVar44 = *(long **)(param_1 + 0x160);
      if (*(long *)(param_1 + 0xc0) != 0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        plVar44 = *(long **)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (*(char *)(param_1 + 0x138) != '\0') {
        lVar19 = *(long *)(param_1 + 0x158);
        fVar81 = exp2f(*(float *)(lVar19 + 100) * 0.01);
        uVar25 = (ulong)*(uint *)(lVar19 + 0x5c);
        fVar62 = *(float *)(&PTR_DAT_042a4ed0)[uVar25 * 5] * fVar81;
        if (*(float *)(&PTR_DAT_042a4ee0)[uVar25 * 5] * fVar81 <=
            *(float *)(&PTR_DAT_042a4ed0)[uVar25 * 5] * fVar81) {
          fVar62 = *(float *)(&PTR_DAT_042a4ee0)[uVar25 * 5] * fVar81;
        }
        fVar81 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
        uVar48 = (uint)(fVar81 * fVar62 * 0.001);
        if (uVar48 == 0) {
          puVar46 = *(undefined4 **)(param_1 + 0x150);
        }
        else {
          if (uVar48 < 5) {
            uVar48 = 4;
          }
          *(uint *)(param_1 + 0xb8) = uVar48;
          pvVar16 = (void *)(**(code **)(*plVar44 + 0x10))(plVar44,uVar48 * 4 + 0xc & 0xfffffff0);
          *(void **)(param_1 + 0xc0) = pvVar16;
          if (pvVar16 == (void *)0x0) {
            return;
          }
          *(undefined4 *)(param_1 + 200) = 0;
          memset(pvVar16,0,(ulong)(uint)(*(int *)(param_1 + 0xb8) << 2));
          if (*(char *)(param_1 + 0x138) == '\0') goto LAB_02e0eb78;
          plVar44 = *(long **)(param_1 + 0x160);
          puVar46 = *(undefined4 **)(param_1 + 0x150);
        }
        if (puVar46 != (undefined4 *)0x0) {
          if (*(long *)(puVar46 + 2) != 0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
            *(undefined8 *)(puVar46 + 2) = 0;
          }
          *puVar46 = 0;
          if (*(long *)(param_1 + 0x150) != 0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
          }
          *(undefined8 *)(param_1 + 0x150) = 0;
          if (*(char *)(param_1 + 0x138) == '\0') goto LAB_02e0eb78;
          plVar44 = *(long **)(param_1 + 0x160);
        }
        uVar25 = (ulong)*(uint *)(*(long *)(param_1 + 0x158) + 0x5c);
        puVar46 = (undefined4 *)(**(code **)(*plVar44 + 0x10))(plVar44,800);
        if (puVar46 == (undefined4 *)0x0) {
LAB_02e0effc:
          *(undefined8 *)(param_1 + 0x150) = 0;
          return;
        }
        *puVar46 = 0;
        memset(puVar46 + 2,0,0x314);
        *(undefined4 **)(param_1 + 0x150) = puVar46;
        iVar15 = FUN_02e1f0dc(*(undefined4 *)(*(long *)(param_1 + 0x158) + 100),puVar46,plVar44,
                              (&PTR_DAT_042a4ed0)[uVar25 * 5],(&PTR_DAT_042a4ee0)[uVar25 * 5],
                              *(undefined4 *)(&DAT_042a4ec8 + uVar25 * 0x28),
                              *(undefined4 *)(&DAT_042a4ed8 + uVar25 * 0x28),
                              *(undefined4 *)(param_1 + 0x130));
        if (iVar15 != 1) {
          return;
        }
      }
LAB_02e0eb78:
      puVar23 = *(uint **)(param_1 + 0x150);
      if ((puVar23 != (uint *)0x0) && (*(void **)(puVar23 + 2) != (void *)0x0)) {
        memset(*(void **)(puVar23 + 2),0,(ulong)*puVar23 << 2);
      }
    }
    lVar19 = *(long *)(param_1 + 0x158);
    if (((*(char *)(param_1 + 0x1f8) == *(char *)(lVar19 + 0x98)) &&
        (iVar15 = *(int *)(param_1 + 0x1e0), iVar15 == *(int *)(lVar19 + 0x80))) &&
       (*(int *)(param_1 + 0x1e8) == *(int *)(lVar19 + 0x88))) {
      if ((*(char *)(param_1 + 0x1f8) != '\0') &&
         (*(int *)(param_1 + 0x1f0) != *(int *)(lVar19 + 0x90))) goto LAB_02e0ebb4;
    }
    else if (*(char *)(lVar19 + 0x98) != '\0') {
      iVar15 = *(int *)(lVar19 + 0x80);
LAB_02e0ebb4:
      if (((iVar15 != 0) || (*(int *)(lVar19 + 0x88) != 0)) || (*(int *)(lVar19 + 0x90) != 0)) {
        if (*(long *)(param_1 + 0x148) != 0) {
          (**(code **)(**(long **)(param_1 + 0x160) + 0x18))();
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        iVar15 = FUN_02e0b8a4(param_1);
        if (iVar15 != 1) {
          return;
        }
        lVar19 = *(long *)(param_1 + 0x158);
        if ((*(char *)(lVar19 + 0x98) != '\0') && (*(char *)(param_1 + 0x134) != '\0')) {
          lVar19 = *(long *)(param_1 + 0x148);
          *(undefined8 *)(lVar19 + 0x80) = 0;
          *(undefined8 *)(lVar19 + 0x88) = 0;
          if (1 < *(byte *)(param_1 + 0x134)) {
            lVar19 = *(long *)(param_1 + 0x148);
            *(undefined8 *)(lVar19 + 0x120) = 0;
            *(undefined8 *)(lVar19 + 0x128) = 0;
            if (2 < *(byte *)(param_1 + 0x134)) {
              uVar25 = 2;
              lVar19 = 0x1c0;
              do {
                puVar38 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar19);
                uVar25 = uVar25 + 1;
                *puVar38 = 0;
                puVar38[1] = 0;
                lVar19 = lVar19 + 0xa0;
              } while (uVar25 < *(byte *)(param_1 + 0x134));
            }
          }
          lVar19 = *(long *)(param_1 + 0x158);
        }
      }
    }
    if (*(int *)(param_1 + 0x1e4) != *(int *)(lVar19 + 0x84)) {
      FUN_02e0be54(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
    }
    if (*(int *)(param_1 + 0x1ec) != *(int *)(lVar19 + 0x8c)) {
      FUN_02e0c16c(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
    }
    if (*(int *)(param_1 + 500) != *(int *)(lVar19 + 0x94)) {
      FUN_02e0c484(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
    }
    uVar24 = *(undefined8 *)(lVar19 + 0x5c);
    uVar28 = *(undefined8 *)(lVar19 + 100);
    uVar29 = *(undefined8 *)(lVar19 + 0x74);
    *(undefined8 *)(param_1 + 0x1cc) = *(undefined8 *)(lVar19 + 0x6c);
    *(undefined8 *)(param_1 + 0x1d4) = uVar29;
    *(undefined8 *)(param_1 + 0x1bc) = uVar24;
    *(undefined8 *)(param_1 + 0x1c4) = uVar28;
    uVar24 = *(undefined8 *)(lVar19 + 0x7c);
    uVar28 = *(undefined8 *)(lVar19 + 0x84);
    uVar29 = *(undefined8 *)(lVar19 + 0x94);
    *(undefined8 *)(param_1 + 0x1ec) = *(undefined8 *)(lVar19 + 0x8c);
    *(undefined8 *)(param_1 + 500) = uVar29;
    *(undefined8 *)(param_1 + 0x1dc) = uVar24;
    *(undefined8 *)(param_1 + 0x1e4) = uVar28;
    *(undefined1 *)(lVar19 + 0x9a) = 0;
    lVar19 = *(long *)(param_1 + 0x158);
    cVar10 = *(char *)(lVar19 + 0x58);
  }
  if (cVar10 != '\0') {
    if ((*(float *)(lVar19 + 8) != *(float *)(param_1 + 0x168)) ||
       (*(float *)(lVar19 + 0xc) != *(float *)(param_1 + 0x16c))) {
      FUN_02e0cf20(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
      fVar62 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x130));
      *(int *)(param_1 + 0x120) =
           (int)((*(float *)(lVar19 + 8) + *(float *)(lVar19 + 0x60) * 0.001) * fVar62);
    }
    if (*(float *)(lVar19 + 0x10) != *(float *)(param_1 + 0x170)) {
      FUN_02e0cf80(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
    }
    if (((*(float *)(lVar19 + 0x18) != *(float *)(param_1 + 0x178)) ||
        (*(float *)(lVar19 + 0x1c) != *(float *)(param_1 + 0x17c))) ||
       (*(float *)(lVar19 + 0x20) != *(float *)(param_1 + 0x180))) {
      FUN_02e0be54(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
    }
    if (((*(float *)(lVar19 + 0x24) != *(float *)(param_1 + 0x184)) ||
        (*(float *)(lVar19 + 0x28) != *(float *)(param_1 + 0x188))) ||
       (*(float *)(lVar19 + 0x2c) != *(float *)(param_1 + 0x18c))) {
      FUN_02e0c16c(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
    }
    if (((*(float *)(lVar19 + 0x30) != *(float *)(param_1 + 400)) ||
        (*(float *)(lVar19 + 0x34) != *(float *)(param_1 + 0x194))) ||
       (*(float *)(lVar19 + 0x38) != *(float *)(param_1 + 0x198))) {
      FUN_02e0c484(param_1);
      lVar19 = *(long *)(param_1 + 0x158);
    }
    *(undefined1 *)(lVar19 + 0x58) = 0;
  }
  if (*(int *)((long)param_2 + 0xc) == 0x11) {
    uVar48 = *(uint *)(param_1 + 0x118);
    uVar42 = *(uint *)(param_1 + 0x120);
    if (uVar48 == 0xffffffff) {
LAB_02e0e5ac:
      *(uint *)(param_1 + 0x118) = uVar42;
      uVar48 = uVar42;
LAB_02e0e5b8:
      *(uint *)(param_1 + 0x11c) = uVar42;
    }
    else {
      if (uVar48 == 0) {
        if (*(short *)((long)param_2 + 0x12) == 0) {
          return;
        }
        goto LAB_02e0e5ac;
      }
      if (*(short *)((long)param_2 + 0x12) != 0) goto LAB_02e0e5ac;
      if (*(uint *)(param_1 + 0x11c) < uVar42) {
        uVar48 = (uVar48 + uVar42) - *(uint *)(param_1 + 0x11c);
        *(uint *)(param_1 + 0x118) = uVar48;
        goto LAB_02e0e5b8;
      }
    }
    uVar50 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((long)param_2 + 0x12);
    uVar42 = uVar48;
    if (uVar50 <= uVar48) {
      uVar42 = uVar50;
    }
    iVar15 = uVar48 - uVar42;
    *(int *)(param_1 + 0x118) = iVar15;
    uVar25 = (ulong)*(ushort *)((long)param_2 + 0x12);
    iVar31 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((long)param_2 + 0x12);
    if (iVar31 != 0) {
      bVar17 = *(byte *)(param_2 + 1);
      if (bVar17 == 0) {
        uVar25 = (ulong)(uint)*(ushort *)(param_2 + 2);
      }
      else {
        uVar49 = (ulong)(uint)(iVar31 * 4);
        memset((void *)(*param_2 + uVar25 * 4),0,uVar49);
        uVar25 = (ulong)*(ushort *)(param_2 + 2);
        if (bVar17 != 1) {
          memset((void *)(*param_2 + uVar25 * 4 + (ulong)*(ushort *)((long)param_2 + 0x12) * 4),0,
                 uVar49);
          uVar25 = (ulong)*(ushort *)(param_2 + 2);
          if (bVar17 != 2) {
            memset((void *)(*param_2 + uVar25 * 8 + (ulong)*(ushort *)((long)param_2 + 0x12) * 4),0,
                   uVar49);
            uVar25 = (ulong)*(ushort *)(param_2 + 2);
            if (bVar17 != 3) {
              lVar22 = (ulong)bVar17 - 3;
              lVar19 = 0xc;
              do {
                memset((void *)(*param_2 + lVar19 * uVar25 +
                               (ulong)*(ushort *)((long)param_2 + 0x12) * 4),0,uVar49);
                uVar25 = (ulong)*(ushort *)(param_2 + 2);
                lVar19 = lVar19 + 4;
                lVar22 = lVar22 + -1;
              } while (lVar22 != 0);
            }
          }
        }
      }
      *(short *)((long)param_2 + 0x12) = (short)uVar25;
      iVar15 = *(int *)(param_1 + 0x118);
    }
    uVar48 = (uint)uVar25;
    if (iVar15 != 0) {
      *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
    uVar48 = (uint)*(ushort *)((long)param_2 + 0x12);
  }
  if (uVar48 == 0) {
    return;
  }
  uVar48 = *(uint *)(param_2 + 1);
  if ((uVar48 & 0xf00) != 0x100) {
    if ((uVar48 & 0xf00) == 0x200) {
      if ((uVar48 & 0xff) < 5) {
        FUN_02e179a8();
      }
      else {
        FUN_02e1a1e8(param_1,param_2);
      }
    }
    goto LAB_02e0e534;
  }
  uVar42 = uVar48 >> 0xc & 0x63f;
  if (1 < uVar42 - 3) {
    uVar25 = (ulong)(uVar42 - 0x603);
    if (uVar42 - 0x603 < 0x3d) {
      if ((1L << (uVar25 & 0x3f) & 0x1111000000000000U) != 0) {
        FUN_02e14c94(param_1,param_2);
        goto LAB_02e0e534;
      }
      if ((1L << (uVar25 & 0x3f) & 0x1110U) != 0) {
        FUN_02e12588(param_1,param_2);
        goto LAB_02e0e534;
      }
      if (uVar25 != 0) goto LAB_02e0f2b8;
    }
    else {
LAB_02e0f2b8:
      if (0xf < uVar42) goto LAB_02e0e534;
      uVar48 = 1 << (ulong)(uVar48 >> 0xc & 0x1f);
      if ((uVar48 & 0x1900) != 0) goto LAB_02e0d0a0;
      if ((uVar48 & 0x8080) == 0) goto LAB_02e0e534;
    }
    FUN_02e0fe50(param_1,param_2);
    goto LAB_02e0e534;
  }
LAB_02e0d0a0:
  __src = (float *)(**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                             (*(long **)(param_1 + 0x160),
                              (ulong)*(byte *)(param_1 + 0x138) * 0x400 + 0x1000);
  if (__src == (float *)0x0) goto LAB_02e0e534;
  __s = __src + 0x200;
  pfVar1 = __src + 0x300;
  bVar14 = *(char *)(param_1 + 0x138) != '\0';
  pfVar8 = (float *)0x0;
  if (bVar14) {
    pfVar8 = __src + 0x500;
  }
  pfVar9 = (float *)0x0;
  if (bVar14) {
    pfVar9 = __src + 0x400;
  }
  fVar81 = *(float *)(*(long *)(param_1 + 0x158) + 0x14) * 0.001627189 + 0.707106;
  fVar62 = 1.0 - fVar81 * fVar81;
  uVar25 = (ulong)(uint)fVar62;
  local_a8[0] = __s;
  local_a8[1] = pfVar1;
  if (0.0 < fVar62) {
    fVar62 = SQRT(fVar62);
    uVar48 = (uint)*(ushort *)((long)param_2 + 0x12);
    if (uVar48 != 0) goto LAB_02e0d138;
  }
  else {
    fVar62 = 0.0;
    uVar48 = (uint)*(ushort *)((long)param_2 + 0x12);
    if (*(ushort *)((long)param_2 + 0x12) != 0) {
LAB_02e0d138:
      fVar82 = *(float *)(param_1 + 0x174) * 0.001627189 + 0.707106;
      fVar57 = 1.0 - fVar82 * fVar82;
      if (0.0 < fVar57) {
        fVar57 = SQRT(fVar57);
      }
      else {
        fVar57 = 0.0;
      }
      uVar49 = 0;
      __dest = __src + 0x100;
      pfVar2 = __src + 0x201;
      pfVar3 = __src + 0x301;
      pfVar4 = __src + 0x101;
      pfVar5 = __src + 0x204;
      pfVar6 = __src + 0x304;
      do {
        uVar51 = (ulong)uVar48;
        if (0xff < uVar48) {
          uVar51 = 0x100;
        }
        FUN_02e1ce44(param_1,param_2,__src,uVar51,uVar49);
        uVar42 = *(uint *)(param_1 + 0xd0);
        uVar50 = (uint)uVar51;
        uVar45 = (ulong)(uVar50 << 2);
        if (uVar42 == 0) {
          memcpy(__dest,__src,uVar45);
        }
        else {
          uVar36 = (ulong)*(uint *)(param_1 + 0xe0);
          pfVar33 = (float *)(*(long *)(param_1 + 0xd8) + uVar36 * 4);
          uVar20 = uVar51;
          pfVar37 = __dest;
          pfVar21 = __src;
          do {
            uVar42 = uVar42 - (int)uVar36;
            uVar18 = (uint)uVar20;
            uVar32 = uVar18;
            if (uVar42 <= uVar18) {
              uVar32 = uVar42;
            }
            uVar11 = uVar32 >> 2;
            uVar42 = uVar32 & 3;
            pfVar27 = pfVar37;
            pfVar30 = pfVar21;
            pfVar35 = pfVar33;
            if (uVar11 != 0) {
              uVar12 = uVar32 >> 2 & 3;
              pfVar35 = (float *)(ulong)uVar11;
              if (2 < uVar11 - 1) {
                iVar15 = uVar11 - uVar12;
                do {
                  uVar28 = *(undefined8 *)(pfVar33 + 2);
                  uVar24 = *(undefined8 *)pfVar33;
                  iVar15 = iVar15 + -4;
                  uVar29 = *(undefined8 *)pfVar21;
                  *(undefined8 *)(pfVar33 + 2) = *(undefined8 *)(pfVar21 + 2);
                  *(undefined8 *)pfVar33 = uVar29;
                  *(undefined8 *)(pfVar37 + 2) = uVar28;
                  *(undefined8 *)pfVar37 = uVar24;
                  uVar28 = *(undefined8 *)(pfVar33 + 6);
                  uVar24 = *(undefined8 *)(pfVar33 + 4);
                  uVar29 = *(undefined8 *)(pfVar21 + 4);
                  *(undefined8 *)(pfVar33 + 6) = *(undefined8 *)(pfVar21 + 6);
                  *(undefined8 *)(pfVar33 + 4) = uVar29;
                  *(undefined8 *)(pfVar37 + 6) = uVar28;
                  *(undefined8 *)(pfVar37 + 4) = uVar24;
                  uVar28 = *(undefined8 *)(pfVar33 + 10);
                  uVar24 = *(undefined8 *)(pfVar33 + 8);
                  uVar29 = *(undefined8 *)(pfVar21 + 8);
                  *(undefined8 *)(pfVar33 + 10) = *(undefined8 *)(pfVar21 + 10);
                  *(undefined8 *)(pfVar33 + 8) = uVar29;
                  *(undefined8 *)(pfVar37 + 10) = uVar28;
                  *(undefined8 *)(pfVar37 + 8) = uVar24;
                  uVar28 = *(undefined8 *)(pfVar33 + 0xe);
                  uVar24 = *(undefined8 *)(pfVar33 + 0xc);
                  pfVar27 = pfVar21 + 0xe;
                  uVar29 = *(undefined8 *)(pfVar21 + 0xc);
                  pfVar21 = pfVar21 + 0x10;
                  *(undefined8 *)(pfVar33 + 0xe) = *(undefined8 *)pfVar27;
                  *(undefined8 *)(pfVar33 + 0xc) = uVar29;
                  *(undefined8 *)(pfVar37 + 0xe) = uVar28;
                  *(undefined8 *)(pfVar37 + 0xc) = uVar24;
                  pfVar33 = pfVar33 + 0x10;
                  pfVar37 = pfVar37 + 0x10;
                  pfVar30 = pfVar21;
                  pfVar35 = pfVar33;
                  pfVar27 = pfVar37;
                } while (iVar15 != 0);
              }
              if (uVar12 != 0) {
                iVar15 = -uVar12;
                pfVar21 = pfVar27;
                pfVar37 = pfVar30;
                do {
                  pfVar35 = pfVar33 + 4;
                  uVar28 = *(undefined8 *)(pfVar33 + 2);
                  uVar24 = *(undefined8 *)pfVar33;
                  bVar14 = iVar15 != -1;
                  iVar15 = iVar15 + 1;
                  pfVar30 = pfVar37 + 4;
                  uVar29 = *(undefined8 *)pfVar37;
                  *(undefined8 *)(pfVar33 + 2) = *(undefined8 *)(pfVar37 + 2);
                  *(undefined8 *)pfVar33 = uVar29;
                  pfVar27 = pfVar21 + 4;
                  *(undefined8 *)(pfVar21 + 2) = uVar28;
                  *(undefined8 *)pfVar21 = uVar24;
                  pfVar21 = pfVar27;
                  pfVar37 = pfVar30;
                  pfVar33 = pfVar35;
                } while (bVar14);
              }
            }
            pfVar37 = pfVar27;
            pfVar21 = pfVar30;
            pfVar33 = pfVar35;
            if (uVar42 != 0) {
              fVar58 = *pfVar35;
              pfVar21 = pfVar30 + 1;
              pfVar33 = pfVar35 + 1;
              *pfVar35 = *pfVar30;
              pfVar37 = pfVar27 + 1;
              *pfVar27 = fVar58;
              if (1 < uVar42) {
                fVar58 = pfVar35[1];
                pfVar35[1] = pfVar30[1];
                pfVar27[1] = fVar58;
                if (uVar42 == 2) {
                  pfVar21 = pfVar30 + 2;
                  pfVar33 = pfVar35 + 2;
                  pfVar37 = pfVar27 + 2;
                }
                else {
                  fVar58 = pfVar35[2];
                  pfVar21 = pfVar30 + 3;
                  pfVar35[2] = pfVar30[2];
                  pfVar33 = pfVar35 + 3;
                  pfVar27[2] = fVar58;
                  pfVar37 = pfVar27 + 3;
                }
              }
            }
            uVar11 = *(int *)(param_1 + 0xe0) + uVar32;
            uVar42 = *(uint *)(param_1 + 0xd0);
            *(uint *)(param_1 + 0xe0) = uVar11;
            if (uVar11 == uVar42) {
              pfVar33 = *(float **)(param_1 + 0xd8);
              uVar11 = 0;
              *(undefined4 *)(param_1 + 0xe0) = 0;
            }
            uVar36 = (ulong)uVar11;
            uVar20 = (ulong)(uVar18 - uVar32);
          } while (uVar18 - uVar32 != 0);
        }
        if ((uVar50 != 0) && (uVar42 = *(uint *)(param_1 + 0xb8), uVar42 != 0)) {
          uVar36 = (ulong)*(uint *)(param_1 + 200);
          uVar20 = uVar51;
          pfVar33 = __src;
          pfVar21 = (float *)(*(long *)(param_1 + 0xc0) + uVar36 * 4);
          do {
            uVar42 = uVar42 - (int)uVar36;
            uVar18 = (uint)uVar20;
            uVar32 = uVar18;
            if (uVar42 <= uVar18) {
              uVar32 = uVar42;
            }
            uVar11 = uVar32 >> 2;
            uVar42 = uVar32 & 3;
            if (uVar11 == 0) {
              pfVar37 = pfVar21;
              pfVar27 = pfVar33;
              if (uVar42 != 0) goto LAB_02e0e320;
            }
            else {
              uVar12 = uVar32 >> 2 & 3;
              pfVar30 = (float *)(ulong)uVar11;
              pfVar37 = pfVar21;
              pfVar35 = (float *)(ulong)(uVar11 - 1);
              pfVar27 = pfVar33;
              if (2 < uVar11 - 1) {
                iVar15 = uVar11 - uVar12;
                do {
                  uVar28 = *(undefined8 *)(pfVar21 + 2);
                  uVar24 = *(undefined8 *)pfVar21;
                  iVar15 = iVar15 + -4;
                  uVar29 = *(undefined8 *)pfVar33;
                  *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar33 + 2);
                  *(undefined8 *)pfVar21 = uVar29;
                  *(undefined8 *)(pfVar33 + 2) = uVar28;
                  *(undefined8 *)pfVar33 = uVar24;
                  uVar28 = *(undefined8 *)(pfVar21 + 6);
                  uVar24 = *(undefined8 *)(pfVar21 + 4);
                  uVar29 = *(undefined8 *)(pfVar33 + 4);
                  *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar33 + 6);
                  *(undefined8 *)(pfVar21 + 4) = uVar29;
                  *(undefined8 *)(pfVar33 + 6) = uVar28;
                  *(undefined8 *)(pfVar33 + 4) = uVar24;
                  uVar28 = *(undefined8 *)(pfVar21 + 10);
                  uVar24 = *(undefined8 *)(pfVar21 + 8);
                  uVar29 = *(undefined8 *)(pfVar33 + 8);
                  *(undefined8 *)(pfVar21 + 10) = *(undefined8 *)(pfVar33 + 10);
                  *(undefined8 *)(pfVar21 + 8) = uVar29;
                  *(undefined8 *)(pfVar33 + 10) = uVar28;
                  *(undefined8 *)(pfVar33 + 8) = uVar24;
                  uVar28 = *(undefined8 *)(pfVar21 + 0xe);
                  uVar24 = *(undefined8 *)(pfVar21 + 0xc);
                  uVar29 = *(undefined8 *)(pfVar33 + 0xc);
                  *(undefined8 *)(pfVar21 + 0xe) = *(undefined8 *)(pfVar33 + 0xe);
                  *(undefined8 *)(pfVar21 + 0xc) = uVar29;
                  *(undefined8 *)(pfVar33 + 0xe) = uVar28;
                  *(undefined8 *)(pfVar33 + 0xc) = uVar24;
                  pfVar21 = pfVar21 + 0x10;
                  pfVar33 = pfVar33 + 0x10;
                  pfVar30 = pfVar21;
                  pfVar37 = pfVar21;
                  pfVar35 = pfVar33;
                  pfVar27 = pfVar33;
                } while (iVar15 != 0);
              }
              pfVar33 = pfVar35;
              pfVar21 = pfVar30;
              if (uVar12 != 0) {
                iVar15 = -uVar12;
                do {
                  pfVar21 = pfVar37 + 4;
                  uVar28 = *(undefined8 *)(pfVar37 + 2);
                  uVar24 = *(undefined8 *)pfVar37;
                  bVar14 = iVar15 != -1;
                  iVar15 = iVar15 + 1;
                  pfVar33 = pfVar27 + 4;
                  uVar29 = *(undefined8 *)pfVar27;
                  *(undefined8 *)(pfVar37 + 2) = *(undefined8 *)(pfVar27 + 2);
                  *(undefined8 *)pfVar37 = uVar29;
                  *(undefined8 *)(pfVar27 + 2) = uVar28;
                  *(undefined8 *)pfVar27 = uVar24;
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar33;
                } while (bVar14);
              }
              pfVar37 = pfVar21;
              pfVar27 = pfVar33;
              if (uVar42 != 0) {
LAB_02e0e320:
                fVar58 = *pfVar21;
                pfVar37 = pfVar21 + 1;
                *pfVar21 = *pfVar27;
                pfVar33 = pfVar27 + 1;
                *pfVar27 = fVar58;
                if (1 < uVar42) {
                  fVar58 = pfVar21[1];
                  pfVar21[1] = pfVar27[1];
                  pfVar27[1] = fVar58;
                  if (uVar42 == 2) {
                    pfVar37 = pfVar21 + 2;
                    pfVar33 = pfVar27 + 2;
                  }
                  else {
                    fVar58 = pfVar21[2];
                    pfVar21[2] = pfVar27[2];
                    pfVar37 = pfVar21 + 3;
                    pfVar33 = pfVar27 + 3;
                    pfVar27[2] = fVar58;
                  }
                }
              }
            }
            uVar11 = *(int *)(param_1 + 200) + uVar32;
            uVar36 = (ulong)uVar11;
            uVar42 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 200) = uVar11;
            if (uVar11 == uVar42) {
              pfVar37 = *(float **)(param_1 + 0xc0);
              uVar36 = 0;
              *(undefined4 *)(param_1 + 200) = 0;
            }
            uVar20 = (ulong)(uVar18 - uVar32);
            pfVar21 = pfVar37;
          } while (uVar18 - uVar32 != 0);
        }
        if (((*(char *)(param_1 + 0x138) != '\0') &&
            (FUN_02e1f368(*(undefined8 *)(param_1 + 0x150),__src,pfVar9,pfVar8,uVar51),
            *(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0')) &&
           (bVar17 = *(byte *)(param_1 + 0x134), bVar17 != 0)) {
          iVar15 = 4 - (uVar50 & 3);
          uVar20 = 0;
          bVar47 = 0;
          uVar42 = iVar15 + uVar50;
          do {
            lVar19 = *(long *)(param_1 + 0x148);
            if (*(int *)(lVar19 + uVar20 * 0xa0 + 0x90) == 1) {
              uVar25 = uVar51;
              uVar32 = uVar50;
              if ((uVar51 & 3) != 0) {
                memset(pfVar9 + uVar51,0,(ulong)(uint)(iVar15 * 4));
                uVar25 = (ulong)uVar42;
                uVar32 = uVar42;
              }
              puVar38 = (undefined8 *)(lVar19 + uVar20 * 0xa0);
              fVar58 = *(float *)(puVar38 + 0x10);
              fVar60 = *(float *)((long)puVar38 + 0x84);
              fVar59 = *(float *)(puVar38 + 0x11);
              fVar61 = *(float *)((long)puVar38 + 0x8c);
              if (uVar32 != 0) {
                uVar28 = puVar38[1];
                uVar24 = *puVar38;
                uVar64 = puVar38[3];
                uVar29 = puVar38[2];
                uVar69 = puVar38[5];
                uVar67 = puVar38[4];
                uVar75 = puVar38[7];
                uVar73 = puVar38[6];
                uVar79 = puVar38[9];
                uVar77 = puVar38[8];
                uVar85 = puVar38[0xb];
                uVar83 = puVar38[10];
                uVar89 = puVar38[0xd];
                uVar87 = puVar38[0xc];
                uVar93 = puVar38[0xf];
                uVar91 = puVar38[0xe];
                pfVar21 = pfVar9;
                do {
                  fVar97 = fVar58 * (float)uVar77;
                  fVar98 = fVar58 * (float)((ulong)uVar77 >> 0x20);
                  fVar99 = fVar58 * (float)uVar79;
                  fVar100 = fVar58 * (float)((ulong)uVar79 >> 0x20);
                  fVar63 = (float)uVar83 * fVar60;
                  fVar52 = (float)((ulong)uVar83 >> 0x20) * fVar60;
                  fVar54 = (float)uVar85 * fVar60;
                  fVar55 = (float)((ulong)uVar85 >> 0x20) * fVar60;
                  pfVar33 = pfVar21 + 4;
                  fVar58 = (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20);
                  fVar66 = (float)uVar87 * fVar59;
                  fVar53 = (float)((ulong)uVar87 >> 0x20) * fVar59;
                  fVar71 = (float)uVar91 * fVar61;
                  fVar72 = (float)((ulong)uVar91 >> 0x20) * fVar61;
                  fVar56 = (float)((ulong)uVar93 >> 0x20) * fVar61;
                  fVar95 = (float)*(undefined8 *)pfVar21;
                  fVar96 = (float)((ulong)*(undefined8 *)pfVar21 >> 0x20);
                  fVar60 = (float)*(undefined8 *)(pfVar21 + 2);
                  fVar61 = fVar99 + fVar54 + (float)uVar89 * fVar59 + (float)uVar93 * fVar61 +
                           (float)uVar28 * fVar60 + (float)uVar64 * fVar60 + (float)uVar69 * fVar96
                           + (float)uVar75 * fVar95;
                  fVar59 = fVar100 + fVar55 + (float)((ulong)uVar89 >> 0x20) * fVar59 + fVar56 +
                           (float)((ulong)uVar28 >> 0x20) * fVar58 +
                           (float)((ulong)uVar64 >> 0x20) * fVar60 +
                           (float)((ulong)uVar69 >> 0x20) * fVar96 +
                           (float)((ulong)uVar75 >> 0x20) * fVar95;
                  *(ulong *)(pfVar21 + 2) = CONCAT44(fVar59,fVar61);
                  *(ulong *)pfVar21 =
                       CONCAT44(fVar98 + fVar52 + fVar53 + fVar72 +
                                (float)((ulong)uVar24 >> 0x20) * fVar96 +
                                (float)((ulong)uVar29 >> 0x20) * fVar60 +
                                (float)((ulong)uVar67 >> 0x20) * fVar96 +
                                (float)((ulong)uVar73 >> 0x20) * fVar95,
                                fVar97 + fVar63 + fVar66 + fVar71 + (float)uVar24 * fVar95 +
                                (float)uVar29 * fVar60 + (float)uVar67 * fVar96 +
                                (float)uVar73 * fVar95);
                  pfVar21 = pfVar33;
                } while (pfVar33 < pfVar9 + uVar25);
              }
              *(float *)(puVar38 + 0x10) = fVar58;
              *(float *)((long)puVar38 + 0x84) = fVar60;
              *(float *)(puVar38 + 0x11) = fVar59;
              *(float *)((long)puVar38 + 0x8c) = fVar61;
              lVar19 = *(long *)(param_1 + 0x148);
              uVar36 = uVar51;
              uVar32 = uVar50;
              if ((uVar51 & 3) != 0) {
                memset(pfVar8 + uVar51,0,(ulong)(uint)(iVar15 * 4));
                uVar36 = (ulong)uVar42;
                uVar32 = uVar42;
              }
              puVar39 = (ulong *)(lVar19 + (uVar20 + 1) * 0xa0);
              fVar58 = *(float *)(puVar39 + 0x10);
              fVar60 = *(float *)((long)puVar39 + 0x84);
              fVar59 = *(float *)(puVar39 + 0x11);
              fVar61 = *(float *)((long)puVar39 + 0x8c);
              uVar25 = (ulong)(uint)fVar61;
              if (uVar32 != 0) {
                uVar20 = puVar39[1];
                uVar25 = *puVar39;
                uVar65 = puVar39[3];
                uVar34 = puVar39[2];
                uVar70 = puVar39[5];
                uVar68 = puVar39[4];
                uVar76 = puVar39[7];
                uVar74 = puVar39[6];
                uVar80 = puVar39[9];
                uVar78 = puVar39[8];
                uVar86 = puVar39[0xb];
                uVar84 = puVar39[10];
                uVar90 = puVar39[0xd];
                uVar88 = puVar39[0xc];
                uVar94 = puVar39[0xf];
                uVar92 = puVar39[0xe];
                pfVar21 = pfVar8;
                do {
                  fVar97 = fVar58 * (float)uVar78;
                  fVar98 = fVar58 * (float)(uVar78 >> 0x20);
                  fVar99 = fVar58 * (float)uVar80;
                  fVar100 = fVar58 * (float)(uVar80 >> 0x20);
                  fVar63 = (float)uVar84 * fVar60;
                  fVar52 = (float)(uVar84 >> 0x20) * fVar60;
                  fVar54 = (float)uVar86 * fVar60;
                  fVar55 = (float)(uVar86 >> 0x20) * fVar60;
                  pfVar33 = pfVar21 + 4;
                  fVar58 = (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20);
                  fVar66 = (float)uVar88 * fVar59;
                  fVar53 = (float)(uVar88 >> 0x20) * fVar59;
                  fVar71 = (float)uVar92 * fVar61;
                  fVar72 = (float)(uVar92 >> 0x20) * fVar61;
                  fVar56 = (float)(uVar94 >> 0x20) * fVar61;
                  fVar95 = (float)*(undefined8 *)pfVar21;
                  fVar96 = (float)((ulong)*(undefined8 *)pfVar21 >> 0x20);
                  fVar60 = (float)*(undefined8 *)(pfVar21 + 2);
                  fVar61 = fVar99 + fVar54 + (float)uVar90 * fVar59 + (float)uVar94 * fVar61 +
                           (float)uVar20 * fVar60 + (float)uVar65 * fVar60 + (float)uVar70 * fVar96
                           + (float)uVar76 * fVar95;
                  fVar59 = fVar100 + fVar55 + (float)(uVar90 >> 0x20) * fVar59 + fVar56 +
                           (float)(uVar20 >> 0x20) * fVar58 + (float)(uVar65 >> 0x20) * fVar60 +
                           (float)(uVar70 >> 0x20) * fVar96 + (float)(uVar76 >> 0x20) * fVar95;
                  *(ulong *)(pfVar21 + 2) = CONCAT44(fVar59,fVar61);
                  *(ulong *)pfVar21 =
                       CONCAT44(fVar98 + fVar52 + fVar53 + fVar72 + (float)(uVar25 >> 0x20) * fVar96
                                + (float)(uVar34 >> 0x20) * fVar60 +
                                (float)(uVar68 >> 0x20) * fVar96 + (float)(uVar74 >> 0x20) * fVar95,
                                fVar97 + fVar63 + fVar66 + fVar71 + (float)uVar25 * fVar95 +
                                (float)uVar34 * fVar60 + (float)uVar68 * fVar96 +
                                (float)uVar74 * fVar95);
                  pfVar21 = pfVar33;
                } while (pfVar33 < pfVar8 + uVar36);
              }
              *(float *)(puVar39 + 0x10) = fVar58;
              *(float *)((long)puVar39 + 0x84) = fVar60;
              *(float *)(puVar39 + 0x11) = fVar59;
              *(float *)((long)puVar39 + 0x8c) = fVar61;
              bVar47 = bVar47 + 1;
              bVar17 = *(byte *)(param_1 + 0x134);
            }
            bVar47 = bVar47 + 1;
            uVar20 = (ulong)bVar47;
          } while (bVar47 < bVar17);
        }
        iVar15 = *(int *)(param_1 + 0x18);
        iVar31 = *(int *)(param_1 + 8);
        uVar42 = iVar31 - iVar15;
        pfVar21 = (float *)(*(long *)(param_1 + 0x10) + (ulong)(uint)(iVar15 << 1) * 4);
        if (uVar50 < uVar42) {
          if (uVar50 != 0) {
            pfVar33 = __dest;
            uVar20 = uVar51;
            if ((uVar51 & 1) != 0) {
              fVar58 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar58;
              uVar25 = (ulong)(uint)*(float *)(param_1 + 0x1c);
              fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x1c);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar33 = pfVar4;
              uVar20 = (ulong)(uVar50 - 1);
            }
            if (uVar50 != 1) {
              do {
                fVar58 = *pfVar33;
                uVar42 = (int)uVar20 - 2;
                uVar20 = (ulong)uVar42;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x1c);
                pfVar21[1] = fVar60;
                *pfVar33 = fVar60;
                fVar58 = pfVar33[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[3]) * *(float *)(param_1 + 0x1c);
                pfVar21[3] = fVar60;
                pfVar33[1] = fVar60;
                pfVar33 = pfVar33 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar42 != 0);
            }
            iVar15 = *(int *)(param_1 + 0x18);
          }
          *(uint *)(param_1 + 0x18) = iVar15 + uVar50;
        }
        else {
          uVar20 = uVar51;
          pfVar33 = __dest;
          do {
            uVar18 = (uint)uVar20;
            uVar32 = uVar18;
            if (uVar42 <= uVar18) {
              uVar32 = uVar42;
            }
            pfVar37 = pfVar33;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar15 = (uVar32 & 1) - uVar32;
                pfVar37 = pfVar21;
                pfVar27 = pfVar33;
                do {
                  fVar58 = *pfVar27;
                  pfVar21 = pfVar37 + 4;
                  pfVar33 = pfVar27 + 2;
                  fVar60 = *pfVar37;
                  *pfVar37 = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[1]) * *(float *)(param_1 + 0x1c);
                  pfVar37[1] = fVar60;
                  *pfVar27 = fVar60;
                  fVar58 = pfVar27[1];
                  fVar60 = pfVar37[2];
                  pfVar37[2] = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[3]) * *(float *)(param_1 + 0x1c);
                  iVar15 = iVar15 + 2;
                  pfVar37[3] = fVar60;
                  pfVar27[1] = fVar60;
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar33;
                } while (iVar15 != 0);
              }
              pfVar37 = pfVar33;
              if ((uVar32 & 1) != 0) {
                fVar58 = *pfVar33;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x1c);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar37 = pfVar33 + 1;
                *pfVar33 = fVar60;
              }
              iVar15 = *(int *)(param_1 + 0x18);
              iVar31 = *(int *)(param_1 + 8);
            }
            iVar15 = iVar15 + uVar32;
            *(int *)(param_1 + 0x18) = iVar15;
            if (iVar15 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x10);
              iVar15 = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
            }
            uVar20 = (ulong)(uVar18 - uVar32);
            uVar42 = iVar31 - iVar15;
            pfVar33 = pfVar37;
          } while (uVar18 - uVar32 != 0);
        }
        iVar15 = *(int *)(param_1 + 0x30);
        iVar31 = *(int *)(param_1 + 0x20);
        uVar42 = iVar31 - iVar15;
        pfVar21 = (float *)(*(long *)(param_1 + 0x28) + (ulong)(uint)(iVar15 << 1) * 4);
        if (uVar50 < uVar42) {
          if (uVar50 != 0) {
            pfVar33 = __dest;
            uVar20 = uVar51;
            if ((uVar51 & 1) != 0) {
              fVar58 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar58;
              uVar25 = (ulong)(uint)*(float *)(param_1 + 0x34);
              fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x34);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar33 = pfVar4;
              uVar20 = (ulong)(uVar50 - 1);
            }
            if (uVar50 != 1) {
              do {
                fVar58 = *pfVar33;
                uVar42 = (int)uVar20 - 2;
                uVar20 = (ulong)uVar42;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x34);
                pfVar21[1] = fVar60;
                *pfVar33 = fVar60;
                fVar58 = pfVar33[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[3]) * *(float *)(param_1 + 0x34);
                pfVar21[3] = fVar60;
                pfVar33[1] = fVar60;
                pfVar33 = pfVar33 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar42 != 0);
            }
            iVar15 = *(int *)(param_1 + 0x30);
          }
          *(uint *)(param_1 + 0x30) = iVar15 + uVar50;
        }
        else {
          uVar20 = uVar51;
          pfVar33 = __dest;
          do {
            uVar18 = (uint)uVar20;
            uVar32 = uVar18;
            if (uVar42 <= uVar18) {
              uVar32 = uVar42;
            }
            pfVar37 = pfVar33;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar15 = (uVar32 & 1) - uVar32;
                pfVar37 = pfVar21;
                pfVar27 = pfVar33;
                do {
                  fVar58 = *pfVar27;
                  pfVar21 = pfVar37 + 4;
                  pfVar33 = pfVar27 + 2;
                  fVar60 = *pfVar37;
                  *pfVar37 = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[1]) * *(float *)(param_1 + 0x34);
                  pfVar37[1] = fVar60;
                  *pfVar27 = fVar60;
                  fVar58 = pfVar27[1];
                  fVar60 = pfVar37[2];
                  pfVar37[2] = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[3]) * *(float *)(param_1 + 0x34);
                  iVar15 = iVar15 + 2;
                  pfVar37[3] = fVar60;
                  pfVar27[1] = fVar60;
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar33;
                } while (iVar15 != 0);
              }
              pfVar37 = pfVar33;
              if ((uVar32 & 1) != 0) {
                fVar58 = *pfVar33;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x34);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar37 = pfVar33 + 1;
                *pfVar33 = fVar60;
              }
              iVar15 = *(int *)(param_1 + 0x30);
              iVar31 = *(int *)(param_1 + 0x20);
            }
            iVar15 = iVar15 + uVar32;
            *(int *)(param_1 + 0x30) = iVar15;
            if (iVar15 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x28);
              iVar15 = 0;
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            uVar20 = (ulong)(uVar18 - uVar32);
            uVar42 = iVar31 - iVar15;
            pfVar33 = pfVar37;
          } while (uVar18 - uVar32 != 0);
        }
        iVar15 = *(int *)(param_1 + 0x48);
        iVar31 = *(int *)(param_1 + 0x38);
        uVar42 = iVar31 - iVar15;
        pfVar21 = (float *)(*(long *)(param_1 + 0x40) + (ulong)(uint)(iVar15 << 1) * 4);
        if (uVar50 < uVar42) {
          if (uVar50 != 0) {
            pfVar33 = __dest;
            uVar20 = uVar51;
            if ((uVar51 & 1) != 0) {
              fVar58 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar58;
              uVar25 = (ulong)(uint)*(float *)(param_1 + 0x4c);
              fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x4c);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar33 = pfVar4;
              uVar20 = (ulong)(uVar50 - 1);
            }
            if (uVar50 != 1) {
              do {
                fVar58 = *pfVar33;
                uVar42 = (int)uVar20 - 2;
                uVar20 = (ulong)uVar42;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x4c);
                pfVar21[1] = fVar60;
                *pfVar33 = fVar60;
                fVar58 = pfVar33[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[3]) * *(float *)(param_1 + 0x4c);
                pfVar21[3] = fVar60;
                pfVar33[1] = fVar60;
                pfVar33 = pfVar33 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar42 != 0);
            }
            iVar15 = *(int *)(param_1 + 0x48);
          }
          *(uint *)(param_1 + 0x48) = iVar15 + uVar50;
        }
        else {
          uVar20 = uVar51;
          pfVar33 = __dest;
          do {
            uVar18 = (uint)uVar20;
            uVar32 = uVar18;
            if (uVar42 <= uVar18) {
              uVar32 = uVar42;
            }
            pfVar37 = pfVar33;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar15 = (uVar32 & 1) - uVar32;
                pfVar37 = pfVar21;
                pfVar27 = pfVar33;
                do {
                  fVar58 = *pfVar27;
                  pfVar21 = pfVar37 + 4;
                  pfVar33 = pfVar27 + 2;
                  fVar60 = *pfVar37;
                  *pfVar37 = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[1]) * *(float *)(param_1 + 0x4c);
                  pfVar37[1] = fVar60;
                  *pfVar27 = fVar60;
                  fVar58 = pfVar27[1];
                  fVar60 = pfVar37[2];
                  pfVar37[2] = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[3]) * *(float *)(param_1 + 0x4c);
                  iVar15 = iVar15 + 2;
                  pfVar37[3] = fVar60;
                  pfVar27[1] = fVar60;
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar33;
                } while (iVar15 != 0);
              }
              pfVar37 = pfVar33;
              if ((uVar32 & 1) != 0) {
                fVar58 = *pfVar33;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 0x4c);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar37 = pfVar33 + 1;
                *pfVar33 = fVar60;
              }
              iVar15 = *(int *)(param_1 + 0x48);
              iVar31 = *(int *)(param_1 + 0x38);
            }
            iVar15 = iVar15 + uVar32;
            *(int *)(param_1 + 0x48) = iVar15;
            if (iVar15 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x40);
              iVar15 = 0;
              *(undefined4 *)(param_1 + 0x48) = 0;
            }
            uVar20 = (ulong)(uVar18 - uVar32);
            uVar42 = iVar31 - iVar15;
            pfVar33 = pfVar37;
          } while (uVar18 - uVar32 != 0);
        }
        iVar15 = *(int *)(param_1 + 0x60);
        iVar31 = *(int *)(param_1 + 0x50);
        uVar42 = iVar31 - iVar15;
        pfVar21 = (float *)(*(long *)(param_1 + 0x58) + (ulong)(uint)(iVar15 << 1) * 4);
        if (uVar50 < uVar42) {
          if (uVar50 != 0) {
            pfVar33 = __dest;
            uVar20 = uVar51;
            if ((uVar51 & 1) != 0) {
              fVar58 = *__dest;
              fVar60 = *pfVar21;
              *pfVar21 = fVar58;
              uVar25 = (ulong)(uint)*(float *)(param_1 + 100);
              fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 100);
              pfVar21[1] = fVar60;
              pfVar21 = pfVar21 + 2;
              *__dest = fVar60;
              pfVar33 = pfVar4;
              uVar20 = (ulong)(uVar50 - 1);
            }
            if (uVar50 != 1) {
              do {
                fVar58 = *pfVar33;
                uVar42 = (int)uVar20 - 2;
                uVar20 = (ulong)uVar42;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 100);
                pfVar21[1] = fVar60;
                *pfVar33 = fVar60;
                fVar58 = pfVar33[1];
                fVar60 = pfVar21[2];
                pfVar21[2] = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[3]) * *(float *)(param_1 + 100);
                pfVar21[3] = fVar60;
                pfVar33[1] = fVar60;
                pfVar33 = pfVar33 + 2;
                pfVar21 = pfVar21 + 4;
              } while (uVar42 != 0);
            }
            iVar15 = *(int *)(param_1 + 0x60);
          }
          *(uint *)(param_1 + 0x60) = iVar15 + uVar50;
        }
        else {
          uVar20 = uVar51;
          pfVar33 = __dest;
          do {
            uVar18 = (uint)uVar20;
            uVar32 = uVar18;
            if (uVar42 <= uVar18) {
              uVar32 = uVar42;
            }
            pfVar37 = pfVar33;
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                iVar15 = (uVar32 & 1) - uVar32;
                pfVar37 = pfVar21;
                pfVar27 = pfVar33;
                do {
                  fVar58 = *pfVar27;
                  pfVar21 = pfVar37 + 4;
                  pfVar33 = pfVar27 + 2;
                  fVar60 = *pfVar37;
                  *pfVar37 = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[1]) * *(float *)(param_1 + 100);
                  pfVar37[1] = fVar60;
                  *pfVar27 = fVar60;
                  fVar58 = pfVar27[1];
                  fVar60 = pfVar37[2];
                  pfVar37[2] = fVar58;
                  fVar60 = fVar60 + (fVar58 - pfVar37[3]) * *(float *)(param_1 + 100);
                  iVar15 = iVar15 + 2;
                  pfVar37[3] = fVar60;
                  pfVar27[1] = fVar60;
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar33;
                } while (iVar15 != 0);
              }
              pfVar37 = pfVar33;
              if ((uVar32 & 1) != 0) {
                fVar58 = *pfVar33;
                fVar60 = *pfVar21;
                *pfVar21 = fVar58;
                fVar60 = fVar60 + (fVar58 - pfVar21[1]) * *(float *)(param_1 + 100);
                pfVar21[1] = fVar60;
                pfVar21 = pfVar21 + 2;
                pfVar37 = pfVar33 + 1;
                *pfVar33 = fVar60;
              }
              iVar15 = *(int *)(param_1 + 0x60);
              iVar31 = *(int *)(param_1 + 0x50);
            }
            iVar15 = iVar15 + uVar32;
            *(int *)(param_1 + 0x60) = iVar15;
            if (iVar15 == iVar31) {
              pfVar21 = *(float **)(param_1 + 0x58);
              iVar15 = 0;
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
            uVar20 = (ulong)(uVar18 - uVar32);
            uVar42 = iVar31 - iVar15;
            pfVar33 = pfVar37;
          } while (uVar18 - uVar32 != 0);
        }
        FUN_02e1d0ac(param_1,__dest,uVar51);
        memset(__s,0,0x800);
        if (*(int *)(param_1 + 0x128) != 0) {
          uVar20 = 0;
          lVar19 = *(long *)(param_1 + 0x140);
          do {
            if (uVar50 != 0) {
              lVar22 = lVar19 + uVar20 * 0xa8;
              plVar44 = (long *)(lVar22 + 0x98);
              puVar23 = (uint *)(lVar22 + 0xa0);
              uVar34 = (ulong)*puVar23;
              puVar26 = (uint *)(lVar19 + uVar20 * 0xa8 + 0x90);
              uVar42 = *puVar26;
              uVar36 = uVar51;
              pfVar33 = __dest;
              pfVar21 = (float *)(*plVar44 + uVar34 * 4);
              do {
                uVar42 = uVar42 - (int)uVar34;
                uVar18 = (uint)uVar36;
                uVar32 = uVar18;
                if (uVar42 <= uVar18) {
                  uVar32 = uVar42;
                }
                uVar11 = uVar32 >> 2;
                uVar42 = uVar32 & 3;
                if (uVar11 == 0) {
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar33;
                  if (uVar42 != 0) goto LAB_02e0d894;
                }
                else {
                  uVar12 = uVar32 >> 2 & 3;
                  pfVar30 = (float *)(ulong)uVar11;
                  pfVar37 = pfVar21;
                  pfVar35 = (float *)(ulong)(uVar11 - 1);
                  pfVar27 = pfVar33;
                  if (2 < uVar11 - 1) {
                    iVar15 = uVar11 - uVar12;
                    do {
                      uVar28 = *(undefined8 *)(pfVar21 + 2);
                      uVar24 = *(undefined8 *)pfVar21;
                      iVar15 = iVar15 + -4;
                      uVar29 = *(undefined8 *)pfVar33;
                      *(undefined8 *)(pfVar21 + 2) = *(undefined8 *)(pfVar33 + 2);
                      *(undefined8 *)pfVar21 = uVar29;
                      *(undefined8 *)(pfVar33 + 2) = uVar28;
                      *(undefined8 *)pfVar33 = uVar24;
                      uVar28 = *(undefined8 *)(pfVar21 + 6);
                      uVar24 = *(undefined8 *)(pfVar21 + 4);
                      uVar29 = *(undefined8 *)(pfVar33 + 4);
                      *(undefined8 *)(pfVar21 + 6) = *(undefined8 *)(pfVar33 + 6);
                      *(undefined8 *)(pfVar21 + 4) = uVar29;
                      *(undefined8 *)(pfVar33 + 6) = uVar28;
                      *(undefined8 *)(pfVar33 + 4) = uVar24;
                      uVar28 = *(undefined8 *)(pfVar21 + 10);
                      uVar24 = *(undefined8 *)(pfVar21 + 8);
                      uVar29 = *(undefined8 *)(pfVar33 + 8);
                      *(undefined8 *)(pfVar21 + 10) = *(undefined8 *)(pfVar33 + 10);
                      *(undefined8 *)(pfVar21 + 8) = uVar29;
                      *(undefined8 *)(pfVar33 + 10) = uVar28;
                      *(undefined8 *)(pfVar33 + 8) = uVar24;
                      uVar28 = *(undefined8 *)(pfVar21 + 0xe);
                      uVar24 = *(undefined8 *)(pfVar21 + 0xc);
                      uVar29 = *(undefined8 *)(pfVar33 + 0xc);
                      *(undefined8 *)(pfVar21 + 0xe) = *(undefined8 *)(pfVar33 + 0xe);
                      *(undefined8 *)(pfVar21 + 0xc) = uVar29;
                      *(undefined8 *)(pfVar33 + 0xe) = uVar28;
                      *(undefined8 *)(pfVar33 + 0xc) = uVar24;
                      pfVar21 = pfVar21 + 0x10;
                      pfVar33 = pfVar33 + 0x10;
                      pfVar30 = pfVar21;
                      pfVar37 = pfVar21;
                      pfVar35 = pfVar33;
                      pfVar27 = pfVar33;
                    } while (iVar15 != 0);
                  }
                  pfVar33 = pfVar35;
                  pfVar21 = pfVar30;
                  if (uVar12 != 0) {
                    iVar15 = -uVar12;
                    do {
                      pfVar21 = pfVar37 + 4;
                      uVar28 = *(undefined8 *)(pfVar37 + 2);
                      uVar24 = *(undefined8 *)pfVar37;
                      bVar14 = iVar15 != -1;
                      iVar15 = iVar15 + 1;
                      pfVar33 = pfVar27 + 4;
                      uVar29 = *(undefined8 *)pfVar27;
                      *(undefined8 *)(pfVar37 + 2) = *(undefined8 *)(pfVar27 + 2);
                      *(undefined8 *)pfVar37 = uVar29;
                      *(undefined8 *)(pfVar27 + 2) = uVar28;
                      *(undefined8 *)pfVar27 = uVar24;
                      pfVar37 = pfVar21;
                      pfVar27 = pfVar33;
                    } while (bVar14);
                  }
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar33;
                  if (uVar42 != 0) {
LAB_02e0d894:
                    fVar58 = *pfVar21;
                    pfVar37 = pfVar21 + 1;
                    *pfVar21 = *pfVar27;
                    pfVar33 = pfVar27 + 1;
                    *pfVar27 = fVar58;
                    if (1 < uVar42) {
                      fVar58 = pfVar21[1];
                      pfVar21[1] = pfVar27[1];
                      pfVar27[1] = fVar58;
                      if (uVar42 == 2) {
                        pfVar37 = pfVar21 + 2;
                        pfVar33 = pfVar27 + 2;
                      }
                      else {
                        fVar58 = pfVar21[2];
                        pfVar21[2] = pfVar27[2];
                        pfVar37 = pfVar21 + 3;
                        pfVar33 = pfVar27 + 3;
                        pfVar27[2] = fVar58;
                      }
                    }
                  }
                }
                uVar11 = *puVar23 + uVar32;
                uVar34 = (ulong)uVar11;
                *puVar23 = uVar11;
                uVar42 = *puVar26;
                if (uVar11 == uVar42) {
                  pfVar37 = (float *)*plVar44;
                  uVar34 = 0;
                  *puVar23 = 0;
                }
                uVar36 = (ulong)(uVar18 - uVar32);
                pfVar21 = pfVar37;
              } while (uVar18 - uVar32 != 0);
              lVar19 = *(long *)(param_1 + 0x140);
            }
            FUN_02e1e1c4(lVar19 + uVar20 * 0xa8,__dest,uVar51,local_a8[uVar20 & 1]);
            uVar20 = uVar20 + 1;
            if (*(uint *)(param_1 + 0x128) <= uVar20) break;
            lVar19 = *(long *)(param_1 + 0x140);
          } while( true );
        }
        fVar59 = *(float *)(param_1 + 0x124) * 1.4142135;
        fVar60 = *(float *)(param_1 + 0x70);
        fVar58 = *(float *)(param_1 + 0x74);
        if (uVar50 == 0) {
          uVar25 = (ulong)(uint)fVar58;
        }
        else {
          pfVar21 = (float *)((long)__src + uVar45 + 0x800);
          fVar61 = *(float *)(param_1 + 0x78);
          if (pfVar21 <= pfVar2) {
            pfVar21 = pfVar2;
          }
          uVar20 = (long)pfVar21 + (-0x801 - (long)__src);
          pfVar21 = __s;
          if (((uint)uVar20 >> 2 & 1) == 0) {
            fVar63 = *__s;
            fVar58 = (fVar63 * fVar59 - fVar60) + fVar58 * fVar61;
            uVar25 = (ulong)(uint)fVar58;
            *__s = fVar58;
            pfVar21 = pfVar2;
            fVar60 = fVar63 * fVar59;
          }
          if (3 < uVar20) {
            do {
              fVar63 = (*pfVar21 * fVar59 - fVar60) + fVar58 * fVar61;
              fVar60 = pfVar21[1] * fVar59;
              fVar58 = (fVar60 - *pfVar21 * fVar59) + fVar63 * fVar61;
              uVar25 = (ulong)(uint)fVar58;
              pfVar33 = pfVar21 + 2;
              *pfVar21 = fVar63;
              pfVar21[1] = fVar58;
              pfVar21 = pfVar33;
            } while (pfVar33 < __s + uVar51);
          }
        }
        fVar61 = *(float *)(param_1 + 0x7c);
        *(float *)(param_1 + 0x70) = fVar60;
        *(int *)(param_1 + 0x74) = (int)uVar25;
        fVar58 = *(float *)(param_1 + 0x80);
        if (uVar50 == 0) {
          uVar25 = (ulong)(uint)fVar58;
        }
        else {
          pfVar21 = (float *)((long)__src + uVar45 + 0xc00);
          fVar60 = *(float *)(param_1 + 0x84);
          if (pfVar21 <= pfVar3) {
            pfVar21 = pfVar3;
          }
          uVar20 = (long)pfVar21 + (-0xc01 - (long)__src);
          pfVar21 = pfVar1;
          if (((uint)uVar20 >> 2 & 1) == 0) {
            fVar63 = *pfVar1;
            fVar58 = (fVar63 * fVar59 - fVar61) + fVar58 * fVar60;
            uVar25 = (ulong)(uint)fVar58;
            *pfVar1 = fVar58;
            pfVar21 = pfVar3;
            fVar61 = fVar63 * fVar59;
          }
          if (3 < uVar20) {
            do {
              fVar63 = (*pfVar21 * fVar59 - fVar61) + fVar58 * fVar60;
              fVar61 = pfVar21[1] * fVar59;
              fVar58 = (fVar61 - *pfVar21 * fVar59) + fVar63 * fVar60;
              uVar25 = (ulong)(uint)fVar58;
              pfVar33 = pfVar21 + 2;
              *pfVar21 = fVar63;
              pfVar21[1] = fVar58;
              pfVar21 = pfVar33;
            } while (pfVar33 < pfVar1 + uVar51);
          }
        }
        *(float *)(param_1 + 0x7c) = fVar61;
        *(int *)(param_1 + 0x80) = (int)uVar25;
        uVar42 = *(uint *)(param_2 + 1);
        if ((uVar42 >> 0xc & 1) == 0) {
          uVar20 = 0;
        }
        else {
          fVar60 = *(float *)(param_1 + 0x1b4) * fVar82;
          fVar66 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
          fVar63 = fVar66 * fVar81;
          fVar59 = *(float *)(param_1 + 0x1b4) * fVar57;
          fVar66 = fVar66 * fVar62;
          fVar58 = *(float *)(param_1 + 0x1ac);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
          uVar25 = (ulong)(uint)fVar61;
          lVar19 = *param_2;
          pfVar21 = (float *)(lVar19 + uVar49 * 4);
          bVar14 = false;
          if ((fVar66 == fVar59) && (bVar14 = false, !NAN(fVar61) && !NAN(fVar58))) {
            bVar14 = fVar61 == fVar58;
          }
          bVar13 = false;
          if ((bVar14) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar60))) {
            bVar13 = fVar63 == fVar60;
          }
          if (bVar13) {
            if (uVar50 != 0) {
              uVar20 = lVar19 + uVar49 * 4;
              pfVar33 = (float *)(uVar20 + 0x10);
              pfVar37 = pfVar21 + uVar51;
              pfVar27 = pfVar37;
              if (pfVar37 <= pfVar33) {
                pfVar27 = pfVar33;
              }
              uVar20 = ~uVar20 + (long)pfVar27;
              pfVar27 = __s;
              pfVar33 = pfVar1;
              pfVar30 = pfVar21;
              if (((uint)uVar20 >> 4 & 1) == 0) {
                uVar25 = CONCAT44((float)(*(ulong *)pfVar21 >> 0x20) * fVar58 +
                                  fVar60 * (float)((ulong)*(undefined8 *)__s >> 0x20) +
                                  fVar59 * (float)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                                  (float)*(ulong *)pfVar21 * fVar58 +
                                  fVar60 * (float)*(undefined8 *)__s +
                                  fVar59 * (float)*(undefined8 *)pfVar1);
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)(*(ulong *)(pfVar21 + 2) >> 0x20) * fVar58 +
                              fVar60 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                              (float)*(ulong *)(pfVar21 + 2) * fVar58 +
                              fVar60 * (float)*(undefined8 *)(__src + 0x202) +
                              fVar59 * (float)*(undefined8 *)(__src + 0x302));
                *(ulong *)pfVar21 = uVar25;
                pfVar27 = pfVar5;
                pfVar33 = pfVar6;
                pfVar30 = pfVar21 + 4;
              }
              if (0xf < uVar20) {
                do {
                  uVar24 = *(undefined8 *)pfVar27;
                  uVar28 = *(undefined8 *)pfVar33;
                  *(ulong *)(pfVar30 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar30 + 2) >> 0x20) * fVar58 +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar30 + 2) * fVar58 +
                                fVar60 * (float)*(undefined8 *)(pfVar27 + 2) +
                                fVar59 * (float)*(undefined8 *)(pfVar33 + 2));
                  *(ulong *)pfVar30 =
                       CONCAT44((float)(*(ulong *)pfVar30 >> 0x20) * fVar58 +
                                fVar60 * (float)((ulong)uVar24 >> 0x20) +
                                fVar59 * (float)((ulong)uVar28 >> 0x20),
                                (float)*(ulong *)pfVar30 * fVar58 + fVar60 * (float)uVar24 +
                                fVar59 * (float)uVar28);
                  pfVar35 = pfVar27 + 6;
                  uVar25 = *(ulong *)(pfVar27 + 4);
                  pfVar41 = pfVar33 + 6;
                  uVar24 = *(undefined8 *)(pfVar33 + 4);
                  pfVar33 = pfVar33 + 8;
                  pfVar27 = pfVar27 + 8;
                  *(ulong *)(pfVar30 + 6) =
                       CONCAT44((float)(*(ulong *)(pfVar30 + 6) >> 0x20) * fVar58 +
                                fVar60 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)pfVar41 >> 0x20),
                                (float)*(ulong *)(pfVar30 + 6) * fVar58 +
                                fVar60 * (float)*(undefined8 *)pfVar35 +
                                fVar59 * (float)*(undefined8 *)pfVar41);
                  *(ulong *)(pfVar30 + 4) =
                       CONCAT44((float)(*(ulong *)(pfVar30 + 4) >> 0x20) * fVar58 +
                                fVar60 * (float)(uVar25 >> 0x20) +
                                fVar59 * (float)((ulong)uVar24 >> 0x20),
                                (float)*(ulong *)(pfVar30 + 4) * fVar58 + fVar60 * (float)uVar25 +
                                fVar59 * (float)uVar24);
                  pfVar30 = pfVar30 + 8;
                } while (pfVar30 < pfVar37);
              }
            }
          }
          else if (uVar50 != 0) {
            fVar71 = 1.0 / (float)uVar51;
            fVar63 = fVar63 - fVar60;
            fVar66 = fVar66 - fVar59;
            fVar61 = (fVar61 - fVar58) * fVar71;
            uVar25 = (ulong)(uint)fVar61;
            pfVar37 = pfVar21;
            pfVar33 = __s;
            do {
              fVar72 = *pfVar37 * fVar58;
              fVar52 = fVar60 * *pfVar33;
              pfVar27 = pfVar33 + 0x100;
              pfVar33 = pfVar33 + 1;
              fVar53 = fVar59 * *pfVar27;
              fVar58 = fVar58 + fVar61;
              fVar60 = fVar60 + fVar63 * fVar71;
              fVar59 = fVar59 + fVar66 * fVar71;
              pfVar27 = pfVar37 + 1;
              *pfVar37 = fVar72 + fVar52 + fVar53;
              pfVar37 = pfVar27;
            } while (pfVar27 < pfVar21 + uVar51);
          }
          if (*(char *)(param_1 + 0x138) == '\0') {
LAB_02e0db88:
            uVar20 = 1;
          }
          else {
            fVar58 = *(float *)(param_1 + 0x1b0) * fVar82;
            fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            fVar59 = fVar61 * fVar81;
            fVar60 = *(float *)(param_1 + 0x1b0) * fVar57;
            fVar61 = fVar61 * fVar62;
            uVar25 = (ulong)(uint)fVar61;
            bVar14 = false;
            if ((fVar59 == fVar58) && (bVar14 = false, !NAN(fVar61) && !NAN(fVar60))) {
              bVar14 = fVar61 == fVar60;
            }
            if (bVar14) {
              if (uVar50 != 0) {
                uVar20 = lVar19 + uVar49 * 4;
                pfVar33 = (float *)(uVar20 + 0x10);
                pfVar37 = pfVar21 + uVar51;
                pfVar27 = pfVar37;
                if (pfVar37 <= pfVar33) {
                  pfVar27 = pfVar33;
                }
                uVar20 = ~uVar20 + (long)pfVar27;
                pfVar27 = pfVar9;
                pfVar33 = pfVar8;
                if (((uint)uVar20 >> 4 & 1) == 0) {
                  uVar25 = *(ulong *)pfVar9;
                  uVar24 = *(undefined8 *)pfVar8;
                  *(ulong *)(pfVar21 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar21 + 2) >> 0x20) +
                                fVar58 * (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar21 + 2) +
                                fVar58 * (float)*(undefined8 *)(pfVar9 + 2) +
                                fVar60 * (float)*(undefined8 *)(pfVar8 + 2));
                  *(ulong *)pfVar21 =
                       CONCAT44((float)(*(ulong *)pfVar21 >> 0x20) +
                                fVar58 * (float)(uVar25 >> 0x20) +
                                fVar60 * (float)((ulong)uVar24 >> 0x20),
                                (float)*(ulong *)pfVar21 + fVar58 * (float)uVar25 +
                                fVar60 * (float)uVar24);
                  pfVar21 = pfVar21 + 4;
                  pfVar27 = pfVar9 + 4;
                  pfVar33 = pfVar8 + 4;
                }
                if (0xf < uVar20) {
                  do {
                    uVar24 = *(undefined8 *)pfVar27;
                    uVar28 = *(undefined8 *)pfVar33;
                    *(ulong *)(pfVar21 + 2) =
                         CONCAT44((float)(*(ulong *)(pfVar21 + 2) >> 0x20) +
                                  fVar58 * (float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                  fVar60 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                                  (float)*(ulong *)(pfVar21 + 2) +
                                  fVar58 * (float)*(undefined8 *)(pfVar27 + 2) +
                                  fVar60 * (float)*(undefined8 *)(pfVar33 + 2));
                    *(ulong *)pfVar21 =
                         CONCAT44((float)(*(ulong *)pfVar21 >> 0x20) +
                                  fVar58 * (float)((ulong)uVar24 >> 0x20) +
                                  fVar60 * (float)((ulong)uVar28 >> 0x20),
                                  (float)*(ulong *)pfVar21 + fVar58 * (float)uVar24 +
                                  fVar60 * (float)uVar28);
                    pfVar30 = pfVar27 + 6;
                    uVar24 = *(undefined8 *)(pfVar27 + 4);
                    pfVar35 = pfVar33 + 6;
                    uVar25 = *(ulong *)(pfVar33 + 4);
                    pfVar33 = pfVar33 + 8;
                    pfVar27 = pfVar27 + 8;
                    *(ulong *)(pfVar21 + 6) =
                         CONCAT44((float)(*(ulong *)(pfVar21 + 6) >> 0x20) +
                                  fVar58 * (float)((ulong)*(undefined8 *)pfVar30 >> 0x20) +
                                  fVar60 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20),
                                  (float)*(ulong *)(pfVar21 + 6) +
                                  fVar58 * (float)*(undefined8 *)pfVar30 +
                                  fVar60 * (float)*(undefined8 *)pfVar35);
                    *(ulong *)(pfVar21 + 4) =
                         CONCAT44((float)(*(ulong *)(pfVar21 + 4) >> 0x20) +
                                  fVar58 * (float)((ulong)uVar24 >> 0x20) +
                                  fVar60 * (float)(uVar25 >> 0x20),
                                  (float)*(ulong *)(pfVar21 + 4) + fVar58 * (float)uVar24 +
                                  fVar60 * (float)uVar25);
                    pfVar21 = pfVar21 + 8;
                  } while (pfVar21 < pfVar37);
                }
              }
            }
            else if (uVar50 != 0) {
              fVar59 = fVar59 - fVar58;
              fVar61 = (fVar61 - fVar60) / (float)uVar51;
              uVar25 = (ulong)(uint)fVar61;
              pfVar33 = pfVar21;
              pfVar37 = pfVar9;
              pfVar27 = pfVar8;
              do {
                fVar63 = fVar58 * *pfVar37;
                fVar66 = fVar60 * *pfVar27;
                fVar58 = fVar58 + fVar59 / (float)uVar51;
                fVar60 = fVar60 + fVar61;
                pfVar30 = pfVar33 + 1;
                *pfVar33 = *pfVar33 + fVar63 + fVar66;
                pfVar33 = pfVar30;
                pfVar37 = pfVar37 + 1;
                pfVar27 = pfVar27 + 1;
              } while (pfVar30 < pfVar21 + uVar51);
              goto LAB_02e0db88;
            }
            uVar20 = 1;
          }
        }
        if ((uVar42 >> 0xd & 1) != 0) {
          uVar34 = (ulong)(uint)((int)uVar20 << 2);
          fVar60 = *(float *)(param_1 + 0x1b4) * fVar57;
          fVar66 = *(float *)(*(long *)(param_1 + 0x158) + 0x54);
          fVar63 = fVar66 * fVar62;
          fVar59 = *(float *)(param_1 + 0x1b4) * fVar82;
          fVar66 = fVar66 * fVar81;
          lVar19 = *param_2;
          uVar36 = (ulong)*(ushort *)(param_2 + 2);
          fVar58 = *(float *)(param_1 + 0x1ac);
          fVar61 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
          uVar25 = (ulong)(uint)fVar61;
          pfVar21 = (float *)(lVar19 + uVar36 * uVar34 + uVar49 * 4);
          lVar22 = uVar49 * 4;
          bVar14 = false;
          if ((fVar66 == fVar59) && (bVar14 = false, !NAN(fVar61) && !NAN(fVar58))) {
            bVar14 = fVar61 == fVar58;
          }
          bVar13 = false;
          if ((bVar14) && (bVar13 = false, !NAN(fVar63) && !NAN(fVar60))) {
            bVar13 = fVar63 == fVar60;
          }
          if (bVar13) {
            if (uVar50 != 0) {
              lVar40 = lVar22 + uVar34 * uVar36;
              uVar68 = lVar19 + lVar40 + uVar45;
              uVar65 = lVar19 + lVar40 + 0x10;
              if (uVar68 <= uVar65) {
                uVar68 = uVar65;
              }
              uVar68 = ~(lVar19 + uVar20 * uVar36 * 4 + lVar22) + uVar68;
              pfVar37 = __s;
              pfVar33 = pfVar1;
              pfVar27 = pfVar21;
              if (((uint)uVar68 >> 4 & 1) == 0) {
                uVar25 = CONCAT44((float)(*(ulong *)pfVar21 >> 0x20) * fVar58 +
                                  fVar60 * (float)((ulong)*(undefined8 *)__s >> 0x20) +
                                  fVar59 * (float)((ulong)*(undefined8 *)pfVar1 >> 0x20),
                                  (float)*(ulong *)pfVar21 * fVar58 +
                                  fVar60 * (float)*(undefined8 *)__s +
                                  fVar59 * (float)*(undefined8 *)pfVar1);
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)(*(ulong *)(pfVar21 + 2) >> 0x20) * fVar58 +
                              fVar60 * (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20) +
                              fVar59 * (float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20),
                              (float)*(ulong *)(pfVar21 + 2) * fVar58 +
                              fVar60 * (float)*(undefined8 *)(__src + 0x202) +
                              fVar59 * (float)*(undefined8 *)(__src + 0x302));
                *(ulong *)pfVar21 = uVar25;
                pfVar37 = pfVar5;
                pfVar33 = pfVar6;
                pfVar27 = pfVar21 + 4;
              }
              if (0xf < uVar68) {
                do {
                  uVar24 = *(undefined8 *)pfVar37;
                  uVar28 = *(undefined8 *)pfVar33;
                  *(ulong *)(pfVar27 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar27 + 2) >> 0x20) * fVar58 +
                                fVar60 * (float)((ulong)*(undefined8 *)(pfVar37 + 2) >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar27 + 2) * fVar58 +
                                fVar60 * (float)*(undefined8 *)(pfVar37 + 2) +
                                fVar59 * (float)*(undefined8 *)(pfVar33 + 2));
                  *(ulong *)pfVar27 =
                       CONCAT44((float)(*(ulong *)pfVar27 >> 0x20) * fVar58 +
                                fVar60 * (float)((ulong)uVar24 >> 0x20) +
                                fVar59 * (float)((ulong)uVar28 >> 0x20),
                                (float)*(ulong *)pfVar27 * fVar58 + fVar60 * (float)uVar24 +
                                fVar59 * (float)uVar28);
                  pfVar30 = pfVar37 + 6;
                  uVar25 = *(ulong *)(pfVar37 + 4);
                  pfVar35 = pfVar33 + 6;
                  uVar24 = *(undefined8 *)(pfVar33 + 4);
                  pfVar33 = pfVar33 + 8;
                  pfVar37 = pfVar37 + 8;
                  *(ulong *)(pfVar27 + 6) =
                       CONCAT44((float)(*(ulong *)(pfVar27 + 6) >> 0x20) * fVar58 +
                                fVar60 * (float)((ulong)*(undefined8 *)pfVar30 >> 0x20) +
                                fVar59 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20),
                                (float)*(ulong *)(pfVar27 + 6) * fVar58 +
                                fVar60 * (float)*(undefined8 *)pfVar30 +
                                fVar59 * (float)*(undefined8 *)pfVar35);
                  *(ulong *)(pfVar27 + 4) =
                       CONCAT44((float)(*(ulong *)(pfVar27 + 4) >> 0x20) * fVar58 +
                                fVar60 * (float)(uVar25 >> 0x20) +
                                fVar59 * (float)((ulong)uVar24 >> 0x20),
                                (float)*(ulong *)(pfVar27 + 4) * fVar58 + fVar60 * (float)uVar25 +
                                fVar59 * (float)uVar24);
                  pfVar27 = pfVar27 + 8;
                } while (pfVar27 < pfVar21 + uVar51);
              }
            }
          }
          else if (uVar50 != 0) {
            fVar71 = 1.0 / (float)uVar51;
            fVar63 = fVar63 - fVar60;
            fVar66 = fVar66 - fVar59;
            fVar61 = (fVar61 - fVar58) * fVar71;
            uVar25 = (ulong)(uint)fVar61;
            pfVar37 = pfVar21;
            pfVar33 = __s;
            do {
              fVar72 = *pfVar37 * fVar58;
              fVar52 = fVar60 * *pfVar33;
              pfVar27 = pfVar33 + 0x100;
              pfVar33 = pfVar33 + 1;
              fVar53 = fVar59 * *pfVar27;
              fVar58 = fVar58 + fVar61;
              fVar60 = fVar60 + fVar63 * fVar71;
              fVar59 = fVar59 + fVar66 * fVar71;
              pfVar27 = pfVar37 + 1;
              *pfVar37 = fVar72 + fVar52 + fVar53;
              pfVar37 = pfVar27;
            } while (pfVar27 < pfVar21 + uVar51);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar57 = *(float *)(param_1 + 0x1b0) * fVar57;
            fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x50);
            fVar58 = fVar60 * fVar62;
            fVar82 = *(float *)(param_1 + 0x1b0) * fVar82;
            fVar60 = fVar60 * fVar81;
            uVar25 = (ulong)(uint)fVar60;
            bVar14 = false;
            if ((fVar58 == fVar57) && (bVar14 = false, !NAN(fVar60) && !NAN(fVar82))) {
              bVar14 = fVar60 == fVar82;
            }
            if (bVar14) {
              if (uVar50 != 0) {
                lVar40 = lVar22 + uVar34 * uVar36;
                uVar65 = lVar19 + lVar40 + uVar45;
                uVar34 = lVar19 + lVar40 + 0x10;
                if (uVar65 <= uVar34) {
                  uVar65 = uVar34;
                }
                uVar65 = ~(lVar19 + uVar20 * uVar36 * 4 + lVar22) + uVar65;
                pfVar27 = pfVar21;
                pfVar37 = pfVar9;
                pfVar33 = pfVar8;
                if (((uint)uVar65 >> 4 & 1) == 0) {
                  uVar25 = *(ulong *)pfVar9;
                  uVar24 = *(undefined8 *)pfVar8;
                  *(ulong *)(pfVar21 + 2) =
                       CONCAT44((float)(*(ulong *)(pfVar21 + 2) >> 0x20) +
                                fVar57 * (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20) +
                                fVar82 * (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20),
                                (float)*(ulong *)(pfVar21 + 2) +
                                fVar57 * (float)*(undefined8 *)(pfVar9 + 2) +
                                fVar82 * (float)*(undefined8 *)(pfVar8 + 2));
                  *(ulong *)pfVar21 =
                       CONCAT44((float)(*(ulong *)pfVar21 >> 0x20) +
                                fVar57 * (float)(uVar25 >> 0x20) +
                                fVar82 * (float)((ulong)uVar24 >> 0x20),
                                (float)*(ulong *)pfVar21 + fVar57 * (float)uVar25 +
                                fVar82 * (float)uVar24);
                  pfVar27 = pfVar21 + 4;
                  pfVar37 = pfVar9 + 4;
                  pfVar33 = pfVar8 + 4;
                }
                if (0xf < uVar65) {
                  do {
                    uVar24 = *(undefined8 *)pfVar37;
                    uVar28 = *(undefined8 *)pfVar33;
                    *(ulong *)(pfVar27 + 2) =
                         CONCAT44((float)(*(ulong *)(pfVar27 + 2) >> 0x20) +
                                  fVar57 * (float)((ulong)*(undefined8 *)(pfVar37 + 2) >> 0x20) +
                                  fVar82 * (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20),
                                  (float)*(ulong *)(pfVar27 + 2) +
                                  fVar57 * (float)*(undefined8 *)(pfVar37 + 2) +
                                  fVar82 * (float)*(undefined8 *)(pfVar33 + 2));
                    *(ulong *)pfVar27 =
                         CONCAT44((float)(*(ulong *)pfVar27 >> 0x20) +
                                  fVar57 * (float)((ulong)uVar24 >> 0x20) +
                                  fVar82 * (float)((ulong)uVar28 >> 0x20),
                                  (float)*(ulong *)pfVar27 + fVar57 * (float)uVar24 +
                                  fVar82 * (float)uVar28);
                    pfVar30 = pfVar37 + 6;
                    uVar24 = *(undefined8 *)(pfVar37 + 4);
                    pfVar35 = pfVar33 + 6;
                    uVar25 = *(ulong *)(pfVar33 + 4);
                    pfVar33 = pfVar33 + 8;
                    pfVar37 = pfVar37 + 8;
                    *(ulong *)(pfVar27 + 6) =
                         CONCAT44((float)(*(ulong *)(pfVar27 + 6) >> 0x20) +
                                  fVar57 * (float)((ulong)*(undefined8 *)pfVar30 >> 0x20) +
                                  fVar82 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20),
                                  (float)*(ulong *)(pfVar27 + 6) +
                                  fVar57 * (float)*(undefined8 *)pfVar30 +
                                  fVar82 * (float)*(undefined8 *)pfVar35);
                    *(ulong *)(pfVar27 + 4) =
                         CONCAT44((float)(*(ulong *)(pfVar27 + 4) >> 0x20) +
                                  fVar57 * (float)((ulong)uVar24 >> 0x20) +
                                  fVar82 * (float)(uVar25 >> 0x20),
                                  (float)*(ulong *)(pfVar27 + 4) + fVar57 * (float)uVar24 +
                                  fVar82 * (float)uVar25);
                    pfVar27 = pfVar27 + 8;
                  } while (pfVar27 < pfVar21 + uVar51);
                }
              }
            }
            else if (uVar50 != 0) {
              fVar58 = fVar58 - fVar57;
              fVar60 = (fVar60 - fVar82) / (float)uVar51;
              uVar25 = (ulong)(uint)fVar60;
              pfVar33 = pfVar21;
              pfVar37 = pfVar9;
              pfVar27 = pfVar8;
              do {
                fVar59 = fVar57 * *pfVar37;
                fVar61 = fVar82 * *pfVar27;
                fVar57 = fVar57 + fVar58 / (float)uVar51;
                fVar82 = fVar82 + fVar60;
                pfVar30 = pfVar33 + 1;
                *pfVar33 = *pfVar33 + fVar59 + fVar61;
                pfVar33 = pfVar30;
                pfVar37 = pfVar37 + 1;
                pfVar27 = pfVar27 + 1;
              } while (pfVar30 < pfVar21 + uVar51);
            }
          }
          uVar20 = (ulong)((int)uVar20 + 1);
        }
        if ((uVar42 >> 0xe & 1) != 0) {
          lVar22 = uVar20 * *(ushort *)(param_2 + 2);
          lVar40 = uVar49 * 4;
          fVar57 = *(float *)(param_1 + 0x1b4) * 0.707106;
          uVar36 = (ulong)(uint)fVar57;
          fVar82 = *(float *)(param_1 + 0x1ac);
          fVar58 = *(float *)(*(long *)(param_1 + 0x158) + 0x4c);
          fVar60 = *(float *)(*(long *)(param_1 + 0x158) + 0x54) * 0.707106;
          uVar25 = (ulong)(uint)fVar60;
          lVar19 = *param_2;
          pfVar21 = (float *)(lVar19 + lVar22 * 4 + uVar49 * 4);
          bVar14 = false;
          if ((fVar58 == fVar82) && (bVar14 = false, !NAN(fVar60) && !NAN(fVar57))) {
            bVar14 = fVar60 == fVar57;
          }
          if (bVar14) {
            if (uVar50 != 0) {
              lVar7 = lVar22 * 4 + lVar40;
              uVar34 = lVar19 + lVar7 + uVar45;
              uVar36 = lVar19 + lVar7 + 0x10;
              if (uVar34 <= uVar36) {
                uVar34 = uVar36;
              }
              uVar34 = ~(lVar22 * 4 + lVar19 + lVar40) + uVar34;
              pfVar33 = __s;
              pfVar27 = pfVar1;
              pfVar37 = pfVar21;
              if (((uint)uVar34 >> 4 & 1) == 0) {
                fVar58 = (float)*(undefined8 *)pfVar1 + (float)*(undefined8 *)__s;
                fVar60 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
                         (float)((ulong)*(undefined8 *)__s >> 0x20);
                uVar25 = CONCAT44(fVar60,fVar58);
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar82 +
                              fVar57 * ((float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 2) * fVar82 +
                              fVar57 * ((float)*(undefined8 *)(__src + 0x302) +
                                       (float)*(undefined8 *)(__src + 0x202)));
                *(ulong *)pfVar21 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar82 +
                              fVar57 * fVar60,
                              (float)*(undefined8 *)pfVar21 * fVar82 + fVar57 * fVar58);
                pfVar33 = pfVar5;
                pfVar27 = pfVar6;
                pfVar37 = pfVar21 + 4;
              }
              if (0xf < uVar34) {
                do {
                  uVar24 = *(undefined8 *)pfVar33;
                  uVar28 = *(undefined8 *)pfVar27;
                  *(ulong *)(pfVar37 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 2) >> 0x20) * fVar82 +
                                fVar57 * ((float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar37 + 2) * fVar82 +
                                fVar57 * ((float)*(undefined8 *)(pfVar27 + 2) +
                                         (float)*(undefined8 *)(pfVar33 + 2)));
                  *(ulong *)pfVar37 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar37 >> 0x20) * fVar82 +
                                fVar57 * ((float)((ulong)uVar28 >> 0x20) +
                                         (float)((ulong)uVar24 >> 0x20)),
                                (float)*(undefined8 *)pfVar37 * fVar82 +
                                fVar57 * ((float)uVar28 + (float)uVar24));
                  pfVar30 = pfVar33 + 6;
                  uVar24 = *(undefined8 *)(pfVar33 + 4);
                  uVar25 = *(ulong *)(pfVar27 + 4);
                  pfVar33 = pfVar33 + 8;
                  *(ulong *)(pfVar37 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 6) >> 0x20) * fVar82 +
                                fVar57 * ((float)((ulong)*(undefined8 *)(pfVar27 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar30 >> 0x20)),
                                (float)*(undefined8 *)(pfVar37 + 6) * fVar82 +
                                fVar57 * ((float)*(undefined8 *)(pfVar27 + 6) +
                                         (float)*(undefined8 *)pfVar30));
                  *(ulong *)(pfVar37 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 4) >> 0x20) * fVar82 +
                                fVar57 * ((float)(uVar25 >> 0x20) + (float)((ulong)uVar24 >> 0x20)),
                                (float)*(undefined8 *)(pfVar37 + 4) * fVar82 +
                                fVar57 * ((float)uVar25 + (float)uVar24));
                  pfVar37 = pfVar37 + 8;
                  pfVar27 = pfVar27 + 8;
                } while (pfVar37 < pfVar21 + uVar51);
              }
            }
          }
          else if (uVar50 != 0) {
            fVar58 = fVar58 - fVar82;
            fVar57 = (fVar60 - fVar57) / (float)uVar51;
            pfVar37 = pfVar21;
            pfVar33 = __s;
            uVar25 = uVar36;
            do {
              fVar61 = *pfVar37 * fVar82;
              fVar63 = *pfVar33;
              fVar60 = (float)uVar36;
              pfVar27 = pfVar33 + 0x100;
              pfVar33 = pfVar33 + 1;
              fVar59 = (float)uVar25;
              fVar82 = fVar82 + fVar58 / (float)uVar51;
              uVar36 = (ulong)(uint)(fVar60 + fVar57);
              uVar25 = (ulong)(uint)(fVar59 + fVar57);
              pfVar30 = pfVar37 + 1;
              *pfVar37 = fVar61 + fVar60 * fVar63 + fVar59 * *pfVar27;
              pfVar37 = pfVar30;
            } while (pfVar30 < pfVar21 + uVar51);
          }
          if (*(char *)(param_1 + 0x138) != '\0') {
            fVar82 = *(float *)(param_1 + 0x1b0) * 0.707106;
            fVar57 = *(float *)(*(long *)(param_1 + 0x158) + 0x50) * 0.707106;
            if (fVar57 == fVar82) {
              if (uVar50 != 0) {
                lVar7 = lVar22 * 4 + lVar40;
                uVar34 = lVar19 + lVar7 + uVar45;
                uVar36 = lVar19 + lVar7 + 0x10;
                if (uVar34 <= uVar36) {
                  uVar34 = uVar36;
                }
                uVar34 = ~(lVar22 * 4 + lVar19 + lVar40) + uVar34;
                uVar32 = ((uint)(uVar34 >> 4) & 0xfffffff) + 1;
                uVar36 = (ulong)uVar32 & 3;
                if ((uVar32 & 3) == 0) {
                  pfVar33 = pfVar9;
                  pfVar37 = pfVar21;
                  pfVar27 = pfVar8;
                }
                else {
                  pfVar30 = pfVar9;
                  pfVar35 = pfVar8;
                  pfVar41 = pfVar21;
                  do {
                    pfVar37 = pfVar41 + 4;
                    uVar36 = uVar36 - 1;
                    pfVar33 = pfVar30 + 4;
                    uVar24 = *(undefined8 *)pfVar30;
                    pfVar27 = pfVar35 + 4;
                    uVar25 = *(ulong *)pfVar35;
                    *(ulong *)(pfVar41 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar41 + 2) >> 0x20) +
                                  fVar82 * ((float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar30 + 2) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar41 + 2) +
                                  fVar82 * ((float)*(undefined8 *)(pfVar35 + 2) +
                                           (float)*(undefined8 *)(pfVar30 + 2)));
                    *(ulong *)pfVar41 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar41 >> 0x20) +
                                  fVar82 * ((float)(uVar25 >> 0x20) + (float)((ulong)uVar24 >> 0x20)
                                           ),
                                  (float)*(undefined8 *)pfVar41 +
                                  fVar82 * ((float)uVar25 + (float)uVar24));
                    pfVar30 = pfVar33;
                    pfVar35 = pfVar27;
                    pfVar41 = pfVar37;
                  } while (uVar36 != 0);
                }
                if (0x2f < uVar34) {
                  do {
                    uVar24 = *(undefined8 *)pfVar33;
                    uVar28 = *(undefined8 *)pfVar27;
                    *(ulong *)(pfVar37 + 2) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 2) >> 0x20) +
                                  fVar82 * ((float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar37 + 2) +
                                  fVar82 * ((float)*(undefined8 *)(pfVar27 + 2) +
                                           (float)*(undefined8 *)(pfVar33 + 2)));
                    *(ulong *)pfVar37 =
                         CONCAT44((float)((ulong)*(undefined8 *)pfVar37 >> 0x20) +
                                  fVar82 * ((float)((ulong)uVar28 >> 0x20) +
                                           (float)((ulong)uVar24 >> 0x20)),
                                  (float)*(undefined8 *)pfVar37 +
                                  fVar82 * ((float)uVar28 + (float)uVar24));
                    uVar24 = *(undefined8 *)(pfVar33 + 4);
                    uVar28 = *(undefined8 *)(pfVar27 + 4);
                    *(ulong *)(pfVar37 + 6) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 6) >> 0x20) +
                                  fVar82 * ((float)((ulong)*(undefined8 *)(pfVar27 + 6) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar33 + 6) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar37 + 6) +
                                  fVar82 * ((float)*(undefined8 *)(pfVar27 + 6) +
                                           (float)*(undefined8 *)(pfVar33 + 6)));
                    *(ulong *)(pfVar37 + 4) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 4) >> 0x20) +
                                  fVar82 * ((float)((ulong)uVar28 >> 0x20) +
                                           (float)((ulong)uVar24 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar37 + 4) +
                                  fVar82 * ((float)uVar28 + (float)uVar24));
                    uVar24 = *(undefined8 *)(pfVar33 + 8);
                    uVar28 = *(undefined8 *)(pfVar27 + 8);
                    *(ulong *)(pfVar37 + 10) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 10) >> 0x20) +
                                  fVar82 * ((float)((ulong)*(undefined8 *)(pfVar27 + 10) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)(pfVar33 + 10) >> 0x20)),
                                  (float)*(undefined8 *)(pfVar37 + 10) +
                                  fVar82 * ((float)*(undefined8 *)(pfVar27 + 10) +
                                           (float)*(undefined8 *)(pfVar33 + 10)));
                    *(ulong *)(pfVar37 + 8) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 8) >> 0x20) +
                                  fVar82 * ((float)((ulong)uVar28 >> 0x20) +
                                           (float)((ulong)uVar24 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar37 + 8) +
                                  fVar82 * ((float)uVar28 + (float)uVar24));
                    pfVar30 = pfVar33 + 0xc;
                    pfVar35 = pfVar33 + 0xe;
                    pfVar33 = pfVar33 + 0x10;
                    uVar25 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 0xc) >> 0x20) +
                                      fVar82 * ((float)((ulong)*(undefined8 *)(pfVar27 + 0xc) >>
                                                       0x20) +
                                               (float)((ulong)*(undefined8 *)pfVar30 >> 0x20)),
                                      (float)*(undefined8 *)(pfVar37 + 0xc) +
                                      fVar82 * ((float)*(undefined8 *)(pfVar27 + 0xc) +
                                               (float)*(undefined8 *)pfVar30));
                    *(ulong *)(pfVar37 + 0xe) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 0xe) >> 0x20) +
                                  fVar82 * ((float)((ulong)*(undefined8 *)(pfVar27 + 0xe) >> 0x20) +
                                           (float)((ulong)*(undefined8 *)pfVar35 >> 0x20)),
                                  (float)*(undefined8 *)(pfVar37 + 0xe) +
                                  fVar82 * ((float)*(undefined8 *)(pfVar27 + 0xe) +
                                           (float)*(undefined8 *)pfVar35));
                    *(ulong *)(pfVar37 + 0xc) = uVar25;
                    pfVar37 = pfVar37 + 0x10;
                    pfVar27 = pfVar27 + 0x10;
                  } while (pfVar37 < pfVar21 + uVar51);
                }
              }
            }
            else if (uVar50 != 0) {
              fVar58 = (fVar57 - fVar82) / (float)uVar51;
              pfVar33 = pfVar21;
              pfVar37 = pfVar9;
              pfVar27 = pfVar8;
              fVar57 = fVar82;
              do {
                fVar60 = *pfVar33 + fVar82 * *pfVar37 + fVar57 * *pfVar27;
                uVar25 = (ulong)(uint)fVar60;
                fVar82 = fVar82 + fVar58;
                fVar57 = fVar57 + fVar58;
                pfVar30 = pfVar33 + 1;
                *pfVar33 = fVar60;
                pfVar33 = pfVar30;
                pfVar37 = pfVar37 + 1;
                pfVar27 = pfVar27 + 1;
              } while (pfVar30 < pfVar21 + uVar51);
            }
          }
          uVar20 = (ulong)((int)uVar20 + 1);
        }
        if ((uVar42 >> 0xf & 1) != 0) {
          lVar22 = *(long *)(param_1 + 0x158);
          fVar82 = *(float *)(param_1 + 0x1ac);
          fVar57 = *(float *)(param_1 + 0x1a8) * 0.707106 * *(float *)(param_1 + 0x1b4);
          uVar36 = (ulong)(uint)fVar57;
          lVar19 = *param_2;
          pfVar21 = (float *)(lVar19 + uVar20 * *(ushort *)(param_2 + 2) * 4 + uVar49 * 4);
          fVar58 = *(float *)(lVar22 + 0x48) * 0.707106 * *(float *)(lVar22 + 0x54);
          uVar25 = (ulong)(uint)fVar58;
          bVar14 = false;
          if ((*(float *)(lVar22 + 0x4c) == fVar82) &&
             (bVar14 = false, !NAN(fVar58) && !NAN(fVar57))) {
            bVar14 = fVar58 == fVar57;
          }
          if (bVar14) {
            if (uVar50 != 0) {
              lVar40 = uVar20 * *(ushort *)(param_2 + 2) * 4;
              lVar22 = lVar40 + uVar49 * 4;
              uVar20 = lVar19 + lVar22 + uVar45;
              uVar45 = lVar19 + lVar22 + 0x10;
              if (uVar20 <= uVar45) {
                uVar20 = uVar45;
              }
              uVar20 = ~(lVar40 + lVar19 + uVar49 * 4) + uVar20;
              if (((uint)uVar20 >> 4 & 1) == 0) {
                fVar58 = (float)*(undefined8 *)pfVar1 + (float)*(undefined8 *)__s;
                fVar60 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20) +
                         (float)((ulong)*(undefined8 *)__s >> 0x20);
                uVar25 = CONCAT44(fVar60,fVar58);
                *(ulong *)(pfVar21 + 2) =
                     CONCAT44((float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar82 +
                              fVar57 * ((float)((ulong)*(undefined8 *)(__src + 0x302) >> 0x20) +
                                       (float)((ulong)*(undefined8 *)(__src + 0x202) >> 0x20)),
                              (float)*(undefined8 *)(pfVar21 + 2) * fVar82 +
                              fVar57 * ((float)*(undefined8 *)(__src + 0x302) +
                                       (float)*(undefined8 *)(__src + 0x202)));
                *(ulong *)pfVar21 =
                     CONCAT44((float)((ulong)*(undefined8 *)pfVar21 >> 0x20) * fVar82 +
                              fVar57 * fVar60,
                              (float)*(undefined8 *)pfVar21 * fVar82 + fVar57 * fVar58);
                pfVar37 = pfVar21 + 4;
                pfVar33 = pfVar5;
                pfVar27 = pfVar6;
              }
              else {
                pfVar37 = pfVar21;
                pfVar33 = __s;
                pfVar27 = pfVar1;
              }
              if (0xf < uVar20) {
                do {
                  uVar24 = *(undefined8 *)pfVar33;
                  uVar28 = *(undefined8 *)pfVar27;
                  *(ulong *)(pfVar37 + 2) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 2) >> 0x20) * fVar82 +
                                fVar57 * ((float)((ulong)*(undefined8 *)(pfVar27 + 2) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(pfVar33 + 2) >> 0x20)),
                                (float)*(undefined8 *)(pfVar37 + 2) * fVar82 +
                                fVar57 * ((float)*(undefined8 *)(pfVar27 + 2) +
                                         (float)*(undefined8 *)(pfVar33 + 2)));
                  *(ulong *)pfVar37 =
                       CONCAT44((float)((ulong)*(undefined8 *)pfVar37 >> 0x20) * fVar82 +
                                fVar57 * ((float)((ulong)uVar28 >> 0x20) +
                                         (float)((ulong)uVar24 >> 0x20)),
                                (float)*(undefined8 *)pfVar37 * fVar82 +
                                fVar57 * ((float)uVar28 + (float)uVar24));
                  pfVar30 = pfVar33 + 6;
                  uVar24 = *(undefined8 *)(pfVar33 + 4);
                  uVar25 = *(ulong *)(pfVar27 + 4);
                  pfVar33 = pfVar33 + 8;
                  *(ulong *)(pfVar37 + 6) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 6) >> 0x20) * fVar82 +
                                fVar57 * ((float)((ulong)*(undefined8 *)(pfVar27 + 6) >> 0x20) +
                                         (float)((ulong)*(undefined8 *)pfVar30 >> 0x20)),
                                (float)*(undefined8 *)(pfVar37 + 6) * fVar82 +
                                fVar57 * ((float)*(undefined8 *)(pfVar27 + 6) +
                                         (float)*(undefined8 *)pfVar30));
                  *(ulong *)(pfVar37 + 4) =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar37 + 4) >> 0x20) * fVar82 +
                                fVar57 * ((float)(uVar25 >> 0x20) + (float)((ulong)uVar24 >> 0x20)),
                                (float)*(undefined8 *)(pfVar37 + 4) * fVar82 +
                                fVar57 * ((float)uVar25 + (float)uVar24));
                  pfVar37 = pfVar37 + 8;
                  pfVar27 = pfVar27 + 8;
                } while (pfVar37 < pfVar21 + uVar51);
              }
            }
          }
          else if (uVar50 != 0) {
            fVar60 = *(float *)(lVar22 + 0x4c) - fVar82;
            fVar57 = (fVar58 - fVar57) / (float)uVar51;
            pfVar37 = pfVar21;
            pfVar33 = __s;
            uVar25 = uVar36;
            do {
              fVar61 = *pfVar37 * fVar82;
              fVar63 = *pfVar33;
              fVar58 = (float)uVar36;
              pfVar27 = pfVar33 + 0x100;
              pfVar33 = pfVar33 + 1;
              fVar59 = (float)uVar25;
              fVar82 = fVar82 + fVar60 / (float)uVar51;
              uVar36 = (ulong)(uint)(fVar58 + fVar57);
              uVar25 = (ulong)(uint)(fVar59 + fVar57);
              pfVar30 = pfVar37 + 1;
              *pfVar37 = fVar61 + fVar58 * fVar63 + fVar59 * *pfVar27;
              pfVar37 = pfVar30;
            } while (pfVar30 < pfVar21 + uVar51);
          }
        }
        lVar19 = *(long *)(param_1 + 0x158);
        uVar49 = (ulong)(uVar50 + (int)uVar49);
        uVar48 = uVar48 - uVar50;
        *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(lVar19 + 0x4c);
        *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(lVar19 + 0x50);
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar19 + 0x54);
        *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar19 + 0x48);
        fVar82 = fVar81;
        fVar57 = fVar62;
      } while (uVar48 != 0);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x160) + 0x18))(*(long **)(param_1 + 0x160),__src);
LAB_02e0e534:
  lVar19 = *(long *)(param_1 + 0x158);
  uVar24 = *(undefined8 *)(lVar19 + 0x10);
  uVar28 = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar19 + 8);
  *(undefined8 *)(param_1 + 0x170) = uVar24;
  *(undefined8 *)(param_1 + 0x178) = uVar28;
  uVar24 = *(undefined8 *)(lVar19 + 0x20);
  uVar28 = *(undefined8 *)(lVar19 + 0x28);
  uVar29 = *(undefined8 *)(lVar19 + 0x38);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(lVar19 + 0x30);
  *(undefined8 *)(param_1 + 0x198) = uVar29;
  *(undefined8 *)(param_1 + 0x180) = uVar24;
  *(undefined8 *)(param_1 + 0x188) = uVar28;
  uVar29 = *(undefined8 *)(lVar19 + 0x50);
  uVar24 = *(undefined8 *)(lVar19 + 0x40);
  uVar28 = *(undefined8 *)(lVar19 + 0x48);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(lVar19 + 0x58);
  *(undefined8 *)(param_1 + 0x1a8) = uVar28;
  *(undefined8 *)(param_1 + 0x1b0) = uVar29;
  *(undefined8 *)(param_1 + 0x1a0) = uVar24;
  return;
}


