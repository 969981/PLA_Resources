/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035e0b0; name: FUN_0035e0b0
 */


void FUN_0035e0b0(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  __tree_node_base *p_Var16;
  __tree_node_base *p_Var17;
  byte local_e8 [16];
  undefined8 local_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  __tree_node_base *local_78;
  __tree_node_base *local_70;
  long local_68;
  
  iVar8 = *(int *)(param_2 + 0x2c);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_003664d8(param_3 + 0x18,iVar12);
      iVar8 = *(int *)(param_2 + 0x2c);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar8);
  }
  puVar5 = PTR_LAB_04373088;
  puVar4 = PTR_FUN_04373078;
  if (((*(byte *)(*(long *)(param_2 + 0x20) + 0x28) & 1) == 0) ||
     (*(char *)(*(long *)(param_2 + 0x20) + 0x48) == '\0')) {
    local_70 = (__tree_node_base *)0x0;
    local_68 = 0;
    local_78 = (__tree_node_base *)&local_70;
    if (0 < iVar8) {
      uVar13 = 0;
      do {
        lVar9 = *(long *)(param_2 + 0x30);
        piVar14 = (int *)(lVar9 + uVar13 * 0x28 + 0x10);
        iVar8 = *piVar14;
        p_Var16 = (__tree_node_base *)&local_70;
        p_Var11 = local_70;
        p_Var17 = (__tree_node_base *)&local_70;
        if (local_70 == (__tree_node_base *)0x0) {
          p_Var11 = *(__tree_node_base **)(lVar9 + uVar13 * 0x28 + 8);
LAB_0035e21c:
          lVar9 = *(long *)p_Var17;
joined_r0x0035e220:
          if (lVar9 == 0) {
            p_Var10 = (__tree_node_base *)FUN_002e2e80(puVar4,0x40);
            *(int *)(p_Var10 + 0x20) = iVar8;
            *(undefined8 *)(p_Var10 + 0x28) = 0;
            *(__tree_node_base **)(p_Var10 + 0x10) = p_Var16;
            *(undefined8 *)(p_Var10 + 0x30) = 0;
            *(undefined8 *)(p_Var10 + 0x38) = 0;
            *(undefined8 *)p_Var10 = 0;
            *(undefined8 *)(p_Var10 + 8) = 0;
            *(__tree_node_base **)p_Var17 = p_Var10;
            if (*(__tree_node_base **)local_78 == (__tree_node_base *)0x0) {
              p_Var16 = p_Var10;
            }
            else {
              p_Var16 = *(__tree_node_base **)p_Var17;
              local_78 = *(__tree_node_base **)local_78;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var16);
            local_68 = local_68 + 1;
            p_Var10 = p_Var10 + 0x28;
          }
          else {
            p_Var10 = (__tree_node_base *)(lVar9 + 0x28);
          }
          if (p_Var10 != p_Var11) {
            uVar1 = *(ulong *)(p_Var11 + 8);
            p_Var16 = *(__tree_node_base **)(p_Var11 + 0x10);
            if (((byte)*p_Var11 & 1) == 0) {
              p_Var16 = p_Var11 + 1;
              uVar1 = (ulong)((byte)*p_Var11 >> 1);
            }
                    /* try { // try from 0035e35c to 0035e35f has its CatchHandler @ 0035e5b8 */
            FUN_00291910(p_Var10,p_Var16,uVar1);
          }
        }
        else {
          do {
            if (iVar8 <= *(int *)(p_Var11 + 0x20)) {
              p_Var16 = p_Var11;
            }
            p_Var11 = *(__tree_node_base **)
                       (p_Var11 + (ulong)(*(int *)(p_Var11 + 0x20) < iVar8) * 8);
          } while (p_Var11 != (__tree_node_base *)0x0);
          if ((p_Var16 == (__tree_node_base *)&local_70) || (iVar8 < *(int *)(p_Var16 + 0x20))) {
            p_Var11 = *(__tree_node_base **)(lVar9 + uVar13 * 0x28 + 8);
            iVar2 = *(int *)(local_70 + 0x20);
            iVar12 = iVar2 - iVar8;
            p_Var16 = local_70;
            while( true ) {
              while (iVar2 <= iVar8) {
                if (iVar12 < 0 == SBORROW4(iVar2,iVar8)) goto LAB_0035e21c;
                p_Var17 = p_Var16 + 8;
                p_Var10 = *(__tree_node_base **)p_Var17;
                if (p_Var10 == (__tree_node_base *)0x0) goto LAB_0035e21c;
                iVar2 = *(int *)(p_Var10 + 0x20);
                iVar12 = iVar2 - iVar8;
                p_Var16 = p_Var10;
              }
              p_Var10 = *(__tree_node_base **)p_Var16;
              p_Var17 = p_Var16;
              if (p_Var10 == (__tree_node_base *)0x0) break;
              iVar2 = *(int *)(p_Var10 + 0x20);
              iVar12 = iVar2 - iVar8;
              p_Var16 = p_Var10;
            }
            lVar9 = *(long *)p_Var16;
            goto joined_r0x0035e220;
          }
                    /* try { // try from 0035e23c to 0035e24b has its CatchHandler @ 0035e5b4 */
          FUN_0034b2f0(local_e8,&DAT_039042e1,*(undefined8 *)(lVar9 + uVar13 * 0x28 + 8));
                    /* try { // try from 0035e24c to 0035e25f has its CatchHandler @ 0035e594 */
          puVar6 = (ulong *)FUN_002e4094(local_e8,"\" uses the same enum value as \"",0x1f);
          uStack_c8 = puVar6[1];
          local_d0 = *puVar6;
          local_c0 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          iVar8 = *piVar14;
          p_Var16 = (__tree_node_base *)&local_70;
          if (local_70 == (__tree_node_base *)0x0) {
LAB_0035e36c:
            p_Var10 = *(__tree_node_base **)p_Var16;
            p_Var11 = p_Var16;
          }
          else {
            iVar2 = *(int *)(local_70 + 0x20);
            iVar12 = iVar2 - iVar8;
            p_Var11 = local_70;
            while( true ) {
              while (p_Var17 = p_Var11, iVar2 <= iVar8) {
                if (iVar12 < 0 == SBORROW4(iVar2,iVar8)) goto LAB_0035e36c;
                p_Var16 = p_Var11 + 8;
                p_Var11 = *(__tree_node_base **)p_Var16;
                if (p_Var11 == (__tree_node_base *)0x0) goto LAB_0035e36c;
                iVar2 = *(int *)(p_Var11 + 0x20);
                iVar12 = iVar2 - iVar8;
              }
              p_Var10 = *(__tree_node_base **)p_Var11;
              if (p_Var10 == (__tree_node_base *)0x0) break;
              iVar2 = *(int *)(p_Var10 + 0x20);
              iVar12 = iVar2 - iVar8;
              p_Var16 = p_Var11;
              p_Var11 = p_Var10;
            }
            p_Var10 = *(__tree_node_base **)p_Var11;
          }
          if (p_Var10 == (__tree_node_base *)0x0) {
            p_Var10 = (__tree_node_base *)FUN_002e2e80(puVar4,0x40);
            *(int *)(p_Var10 + 0x20) = iVar8;
            *(undefined8 *)(p_Var10 + 0x28) = 0;
            *(__tree_node_base **)(p_Var10 + 0x10) = p_Var17;
            *(undefined8 *)(p_Var10 + 0x30) = 0;
            *(undefined8 *)(p_Var10 + 0x38) = 0;
            *(undefined8 *)p_Var10 = 0;
            *(undefined8 *)(p_Var10 + 8) = 0;
            *(__tree_node_base **)p_Var11 = p_Var10;
            if (*(__tree_node_base **)local_78 == (__tree_node_base *)0x0) {
              p_Var16 = p_Var10;
            }
            else {
              p_Var16 = *(__tree_node_base **)p_Var11;
              local_78 = *(__tree_node_base **)local_78;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var16);
            local_68 = local_68 + 1;
          }
          uVar1 = (ulong)((byte)p_Var10[0x28] >> 1);
          p_Var16 = p_Var10 + 0x29;
          if (((byte)p_Var10[0x28] & 1) != 0) {
            uVar1 = *(ulong *)(p_Var10 + 0x30);
            p_Var16 = *(__tree_node_base **)(p_Var10 + 0x38);
          }
                    /* try { // try from 0035e3f8 to 0035e3ff has its CatchHandler @ 0035e56c */
          puVar6 = (ulong *)FUN_002e4094(&local_d0,p_Var16,uVar1);
          uStack_a8 = puVar6[1];
          local_b0 = *puVar6;
          local_a0 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
                    /* try { // try from 0035e418 to 0035e42b has its CatchHandler @ 0035e530 */
          puVar6 = (ulong *)FUN_002e4094(&local_b0,
                                         "\". If this is intended, set \'option allow_alias = true;\' to the enum definition."
                                         ,0x50);
          uStack_88 = puVar6[1];
          local_90 = *puVar6;
          local_80 = puVar6[2];
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          if ((local_b0 & 1) == 0) {
            if ((local_d0 & 1) == 0) goto LAB_0035e454;
LAB_0035e480:
            FUN_002e2ea0(puVar5,local_c0);
            if ((local_e8[0] & 1) != 0) goto LAB_0035e494;
LAB_0035e45c:
            cVar3 = *(char *)(*(long *)(param_2 + 0x20) + 0x48);
          }
          else {
            FUN_002e2ea0(puVar5,local_a0);
            if ((local_d0 & 1) != 0) goto LAB_0035e480;
LAB_0035e454:
            if ((local_e8[0] & 1) == 0) goto LAB_0035e45c;
LAB_0035e494:
            FUN_002e2ea0(puVar5,local_d8);
            cVar3 = *(char *)(*(long *)(param_2 + 0x20) + 0x48);
          }
          if (cVar3 == '\0') {
            uVar15 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 0035e4b0 to 0035e4d3 has its CatchHandler @ 0035e51c */
            uVar7 = FUN_003664d8(param_3 + 0x18,uVar13 & 0xffffffff);
            FUN_0034db00(param_1,uVar15,uVar7,1,&local_90);
          }
          if ((local_90 & 1) != 0) {
            FUN_002e2ea0(puVar5,local_80);
          }
        }
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)*(int *)(param_2 + 0x2c));
    }
    FUN_0036fdb8(&local_78,local_70);
  }
  return;
}


