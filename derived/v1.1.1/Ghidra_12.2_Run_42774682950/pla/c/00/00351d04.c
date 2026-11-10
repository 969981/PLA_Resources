/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00351d04; name: FUN_00351d04
 */


/* WARNING: Removing unreachable block (ram,0x00352418) */
/* WARNING: Removing unreachable block (ram,0x00352b80) */
/* WARNING: Removing unreachable block (ram,0x00352da0) */
/* WARNING: Type propagation algorithm not settling */

int * FUN_00351d04(long *param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  __tree_node_base **pp_Var10;
  ulong uVar11;
  void *__s;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  ulong *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long extraout_x1;
  undefined8 extraout_x1_00;
  long extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long lVar20;
  char cVar21;
  __tree_node_base *p_Var22;
  int *piVar23;
  long *plVar24;
  undefined *puVar25;
  char *pcVar26;
  undefined4 uVar27;
  ulong uVar28;
  byte *pbVar29;
  long lVar30;
  int iVar31;
  size_t sVar32;
  __tree_node_base *p_Var33;
  long lVar34;
  long lVar35;
  __tree_node_base *p_Var36;
  __tree_node_base *p_Var37;
  int *piVar38;
  long local_238;
  __tree_node_base *local_1e8;
  __tree_node_base *p_Stack_1e0;
  __tree_node_base *local_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 local_1c8;
  undefined1 auStack_1b8 [8];
  undefined8 local_1b0;
  undefined1 auStack_1a0 [64];
  __tree_node_base *local_160;
  __tree_node_base *local_158;
  long local_150;
  __tree_node_base *local_148;
  __tree_node_base *local_140;
  long local_138;
  byte local_130 [8];
  ulong local_128;
  ulong local_120;
  byte local_118 [16];
  undefined8 local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  __tree_node_base **local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  piVar7 = (int *)FUN_003415f0(param_1[1],0xa0);
  param_1[10] = (long)piVar7;
  *(undefined2 *)(piVar7 + 0x10) = 0;
  if ((*(uint *)(param_2 + 0x10) >> 4 & 1) == 0) {
    lVar8 = FUN_003bde90();
    local_238 = 0;
  }
  else {
    if (*(long *)(param_2 + 0xd0) == 0) {
      FUN_0030f640(&local_1e8,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x1d6f);
                    /* try { // try from 00351d78 to 00351d8b has its CatchHandler @ 0035338c */
      uVar9 = FUN_0030f3ac(&local_1e8,"CHECK failed: !value || source_code_info_ != nullptr: ");
                    /* try { // try from 00351d8c to 00351d93 has its CatchHandler @ 00353388 */
      FUN_0030f41c(&local_90,uVar9);
      FUN_0030f658(&local_1e8);
    }
    lVar8 = FUN_00353674(param_1[1],0);
    puVar25 = PTR_DAT_04373be8;
    if (*(undefined **)(param_2 + 0xd0) != (undefined *)0x0) {
      puVar25 = *(undefined **)(param_2 + 0xd0);
    }
    FUN_003be458(lVar8,puVar25);
    local_238 = lVar8;
  }
  *(long *)(piVar7 + 0x26) = lVar8;
  lVar8 = FUN_00341434(param_1[1]);
  param_1[0xb] = lVar8;
  *(long *)(param_1[10] + 0x90) = lVar8;
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    p_Stack_1e0 = (__tree_node_base *)0x0;
    local_1d8 = (__tree_node_base *)0x0;
    local_1e8 = (__tree_node_base *)0x0;
                    /* try { // try from 00351df0 to 00351e0b has its CatchHandler @ 003533d8 */
    FUN_0034dc2c(param_1,&local_1e8,param_2,10,"Missing field: FileDescriptorProto.name.");
    if (((ulong)local_1e8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_1d8);
    }
  }
  pbVar19 = *(byte **)(param_2 + 0xc0);
  bVar4 = *pbVar19;
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 != 0) goto LAB_00351e44;
LAB_00351ef8:
    lVar8 = param_1[10];
    uVar27 = 2;
LAB_00351f00:
    *(undefined4 *)(lVar8 + 0x3c) = uVar27;
  }
  else {
    if (*(long *)(pbVar19 + 8) == 0) goto LAB_00351ef8;
LAB_00351e44:
    uVar11 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar11 = *(ulong *)(pbVar19 + 8);
    }
    if (uVar11 == 6) {
      pbVar29 = *(byte **)(pbVar19 + 0x10);
      if ((bVar4 & 1) == 0) {
        pbVar29 = pbVar19 + 1;
      }
      if (*(int *)pbVar29 == 0x746f7270 && *(short *)(pbVar29 + 4) == 0x326f) goto LAB_00351ef8;
      if (*(int *)pbVar29 != 0x746f7270 || *(short *)(pbVar29 + 4) != 0x336f) goto LAB_00351ea8;
      lVar8 = param_1[10];
      uVar27 = 3;
      goto LAB_00351f00;
    }
LAB_00351ea8:
    *(undefined4 *)(param_1[10] + 0x3c) = 0;
    uVar9 = *(undefined8 *)(param_2 + 0xb0);
    FUN_0034b2f0(&local_1e8,"Unrecognized syntax: ");
                    /* try { // try from 00351ec4 to 00351edb has its CatchHandler @ 003533a4 */
    FUN_0034db00(param_1,uVar9,param_2,10,&local_1e8);
    if (((ulong)local_1e8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_1d8);
    }
  }
  uVar9 = FUN_00340fec(param_1[1],*(undefined8 *)(param_2 + 0xb0));
  *(undefined8 *)piVar7 = uVar9;
  lVar8 = param_1[1];
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) == 0) {
    p_Stack_1e0 = (__tree_node_base *)0x0;
    local_1d8 = (__tree_node_base *)0x0;
    local_1e8 = (__tree_node_base *)0x0;
    pp_Var10 = (__tree_node_base **)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (pp_Var10 != (__tree_node_base **)0x0) {
      pp_Var10[2] = local_1d8;
      pp_Var10[1] = p_Stack_1e0;
      *pp_Var10 = local_1e8;
    }
                    /* try { // try from 00351f58 to 00351f5f has its CatchHandler @ 003533cc */
    local_90 = pp_Var10;
    FUN_003410d8(lVar8 + 0xd0,&local_90);
    *(__tree_node_base ***)(piVar7 + 2) = pp_Var10;
  }
  else {
    uVar9 = FUN_00340fec(lVar8,*(undefined8 *)(param_2 + 0xb8));
    *(undefined8 *)(piVar7 + 2) = uVar9;
  }
  *(long *)(piVar7 + 4) = *param_1;
  uVar11 = FUN_00340230(param_1[1],piVar7);
  if ((uVar11 & 1) == 0) {
    FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 0xb0),param_2,10,
                 "A file with this name is already in the pool.");
    return (int *)0x0;
  }
  pbVar19 = *(byte **)(piVar7 + 2);
  if ((*pbVar19 & 1) == 0) {
    if (*pbVar19 >> 1 != 0) goto LAB_00351fd4;
  }
  else if (*(long *)(pbVar19 + 8) != 0) {
LAB_00351fd4:
    FUN_003507e4(param_1,pbVar19,param_2,piVar7);
  }
  local_148 = (__tree_node_base *)&local_140;
  local_140 = (__tree_node_base *)0x0;
  local_138 = 0;
  iVar6 = *(int *)(param_2 + 0x20);
  piVar7[8] = iVar6;
                    /* try { // try from 00352004 to 00352033 has its CatchHandler @ 003533f8 */
  uVar9 = FUN_003415f0(param_1[1],iVar6 << 3);
  *(undefined8 *)(piVar7 + 0x12) = uVar9;
  if (*(char *)(*param_1 + 0x29) == '\0') {
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[0x14] = 0;
    piVar7[0x15] = 0;
  }
  else {
    uVar9 = FUN_00341288(param_1[1]);
    *(undefined8 *)(piVar7 + 6) = uVar9;
    __s = (void *)FUN_003415f0(param_1[1],*(int *)(param_2 + 0x20) << 3);
    *(void **)(piVar7 + 0x14) = __s;
    if (0 < *(int *)(param_2 + 0x20)) {
      memset(__s,0,(long)*(int *)(param_2 + 0x20) << 3);
    }
  }
  p_Var33 = (__tree_node_base *)(param_1 + 0x10);
  plVar12 = param_1 + 0xf;
  FUN_0036b4c4(plVar12,*(undefined8 *)p_Var33);
  param_1[0x11] = 0;
  param_1[0xf] = (long)p_Var33;
  param_1[0x10] = 0;
  puVar25 = PTR_FUN_04373078;
  local_158 = (__tree_node_base *)0x0;
  local_150 = 0;
  local_160 = (__tree_node_base *)&local_158;
  if (0 < *(int *)(param_2 + 0xa0)) {
    iVar6 = 0;
    do {
                    /* try { // try from 003520d4 to 003520df has its CatchHandler @ 003535ec */
      piVar13 = (int *)FUN_00326ad0(param_2 + 0xa0,iVar6);
      iVar31 = *piVar13;
      p_Var36 = (__tree_node_base *)&local_158;
      if (local_158 == (__tree_node_base *)0x0) {
        p_Var37 = (__tree_node_base *)&local_158;
LAB_00352148:
        p_Var22 = *(__tree_node_base **)p_Var36;
      }
      else {
        iVar3 = *(int *)(local_158 + 0x1c);
        p_Var37 = local_158;
        while( true ) {
          while (iVar3 <= iVar31) {
            if (iVar31 <= iVar3) goto LAB_00352148;
            p_Var36 = p_Var37 + 8;
            p_Var22 = *(__tree_node_base **)p_Var36;
            if (p_Var22 == (__tree_node_base *)0x0) goto LAB_00352148;
            p_Var37 = p_Var22;
            iVar3 = *(int *)(p_Var22 + 0x1c);
          }
          p_Var22 = *(__tree_node_base **)p_Var37;
          p_Var36 = p_Var37;
          if (p_Var22 == (__tree_node_base *)0x0) break;
          iVar3 = *(int *)(p_Var22 + 0x1c);
          p_Var37 = p_Var22;
        }
        p_Var22 = *(__tree_node_base **)p_Var37;
      }
      if (p_Var22 == (__tree_node_base *)0x0) {
        p_Var22 = (__tree_node_base *)FUN_002e2e80(puVar25,0x20);
        *(int *)(p_Var22 + 0x1c) = iVar31;
        *(__tree_node_base **)(p_Var22 + 0x10) = p_Var37;
        *(undefined8 *)p_Var22 = 0;
        *(undefined8 *)(p_Var22 + 8) = 0;
        *(__tree_node_base **)p_Var36 = p_Var22;
        if (*(__tree_node_base **)local_160 == (__tree_node_base *)0x0) {
        }
        else {
          p_Var22 = *(__tree_node_base **)p_Var36;
          local_160 = *(__tree_node_base **)local_160;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_158,p_Var22);
        local_150 = local_150 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 0xa0));
  }
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar11 = 0;
    lVar8 = param_2 + 0x18;
    do {
                    /* try { // try from 003521cc to 003521eb has its CatchHandler @ 003535f8 */
      uVar9 = FUN_0032b79c(lVar8,uVar11 & 0xffffffff);
      plVar14 = (long *)FUN_003667bc(&local_148,&local_90,uVar9);
      if (*plVar14 == 0) {
                    /* try { // try from 0035220c to 0035221b has its CatchHandler @ 003535f8 */
        FUN_0036ba00(&local_1e8,&local_148,uVar9);
        *(__tree_node_base ***)(local_1e8 + 0x10) = local_90;
        *(undefined8 *)local_1e8 = 0;
        *(undefined8 *)(local_1e8 + 8) = 0;
        *plVar14 = (long)local_1e8;
        p_Var36 = local_1e8;
        if (*(__tree_node_base **)local_148 != (__tree_node_base *)0x0) {
          p_Var36 = (__tree_node_base *)*plVar14;
          local_148 = *(__tree_node_base **)local_148;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_140,p_Var36);
        local_138 = local_138 + 1;
      }
      else {
                    /* try { // try from 003521f8 to 00352207 has its CatchHandler @ 0035357c */
        FUN_003519f4(param_1,param_2,uVar11 & 0xffffffff);
      }
      lVar30 = param_1[1];
                    /* try { // try from 0035225c to 003522d3 has its CatchHandler @ 0035360c */
      pbVar19 = (byte *)FUN_0032b79c(lVar8,uVar11 & 0xffffffff);
      local_1e8 = *(__tree_node_base **)(pbVar19 + 0x10);
      if ((*pbVar19 & 1) == 0) {
        local_1e8 = (__tree_node_base *)(pbVar19 + 1);
      }
      lVar30 = FUN_00364b6c(lVar30 + 0x158,&local_1e8);
      if (lVar30 == 0) {
        piVar13 = (int *)0x0;
        lVar30 = *(long *)(*param_1 + 0x18);
joined_r0x003522b8:
        if (lVar30 != 0) {
          uVar9 = FUN_0032b79c(lVar8,uVar11 & 0xffffffff);
          piVar13 = (int *)FUN_0034222c(lVar30,uVar9);
        }
      }
      else {
        piVar13 = *(int **)(lVar30 + 0x18);
        if (piVar13 == (int *)0x0) {
          lVar30 = *(long *)(*param_1 + 0x18);
          goto joined_r0x003522b8;
        }
      }
      if (piVar13 == piVar7) goto LAB_003532a0;
      lVar30 = *param_1;
      if (piVar13 == (int *)0x0) {
        if (*(char *)(lVar30 + 0x29) == '\0') {
          if (*(char *)(lVar30 + 0x2a) != '\0') {
LAB_003523bc:
            uVar9 = FUN_0032b79c(lVar8,uVar11 & 0xffffffff);
            piVar13 = (int *)FUN_0034fe3c(lVar30,uVar9);
            *(int **)(*(long *)(piVar7 + 0x12) + uVar11 * 8) = piVar13;
            goto joined_r0x003523e4;
          }
          if ((*(char *)(lVar30 + 0x2b) == '\0') && (local_158 != (__tree_node_base *)0x0)) {
            p_Var36 = (__tree_node_base *)&local_158;
            p_Var37 = local_158;
            do {
              if ((long)uVar11 <= (long)*(int *)(p_Var37 + 0x1c)) {
                p_Var36 = p_Var37;
              }
              p_Var37 = *(__tree_node_base **)
                         (p_Var37 + (ulong)((long)*(int *)(p_Var37 + 0x1c) < (long)uVar11) * 8);
            } while (p_Var37 != (__tree_node_base *)0x0);
            if ((p_Var36 != (__tree_node_base *)&local_158) &&
               ((long)*(int *)(p_Var36 + 0x1c) <= (long)uVar11)) goto LAB_003523bc;
          }
          FUN_00351b28(param_1,param_2,uVar11 & 0xffffffff);
          *(undefined8 *)(*(long *)(piVar7 + 0x12) + uVar11 * 8) = 0;
        }
        else {
          *(undefined8 *)(*(long *)(piVar7 + 0x12) + uVar11 * 8) = 0;
        }
LAB_00352388:
        if (*(char *)(*param_1 + 0x29) != '\0') {
          lVar30 = param_1[1];
                    /* try { // try from 00352398 to 00352403 has its CatchHandler @ 0035360c */
          uVar9 = FUN_0032b79c(lVar8,uVar11 & 0xffffffff);
          uVar9 = FUN_00340fec(lVar30,uVar9);
          *(undefined8 *)(*(long *)(piVar7 + 0x14) + uVar11 * 8) = uVar9;
        }
      }
      else {
                    /* try { // try from 003522fc to 003522ff has its CatchHandler @ 00353534 */
        if (((*(char *)(lVar30 + 0x28) == '\0') ||
            (lVar30 = FUN_0036bb08(lVar30 + 0x30,*(undefined8 *)(param_2 + 0xb0)),
            *param_1 + 0x38 == lVar30)) || (piVar13[9] != 0)) {
LAB_0035242c:
          *(int **)(*(long *)(piVar7 + 0x12) + uVar11 * 8) = piVar13;
        }
        else {
          p_Var36 = *(__tree_node_base **)p_Var33;
          if (p_Var36 == (__tree_node_base *)0x0) {
            p_Var37 = p_Var33;
            p_Var36 = p_Var33;
LAB_00352424:
            lVar30 = *(long *)p_Var37;
          }
          else {
            piVar23 = *(int **)(p_Var36 + 0x20);
            p_Var37 = (__tree_node_base *)(param_1 + 0x10);
            while( true ) {
              while (piVar23 <= piVar13) {
                if (piVar13 <= piVar23) goto LAB_00352424;
                p_Var37 = p_Var36 + 8;
                p_Var22 = *(__tree_node_base **)p_Var37;
                if (p_Var22 == (__tree_node_base *)0x0) goto LAB_00352424;
                p_Var36 = p_Var22;
                piVar23 = *(int **)(p_Var22 + 0x20);
              }
              p_Var22 = *(__tree_node_base **)p_Var36;
              p_Var37 = p_Var36;
              if (p_Var22 == (__tree_node_base *)0x0) break;
              piVar23 = *(int **)(p_Var22 + 0x20);
              p_Var36 = p_Var22;
            }
            lVar30 = *(long *)p_Var36;
          }
          if (lVar30 != 0) goto LAB_0035242c;
          p_Var22 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x28);
          *(undefined8 *)p_Var22 = 0;
          *(undefined8 *)(p_Var22 + 8) = 0;
          *(int **)(p_Var22 + 0x20) = piVar13;
          *(__tree_node_base **)(p_Var22 + 0x10) = p_Var36;
          *(__tree_node_base **)p_Var37 = p_Var22;
          if (*(long *)*plVar12 != 0) {
            *plVar12 = *(long *)*plVar12;
            p_Var22 = *(__tree_node_base **)p_Var37;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((__tree_node_base *)param_1[0x10],p_Var22);
          param_1[0x11] = param_1[0x11] + 1;
          *(int **)(*(long *)(piVar7 + 0x12) + uVar11 * 8) = piVar13;
        }
joined_r0x003523e4:
        if (piVar13 == (int *)0x0) goto LAB_00352388;
      }
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)*(int *)(param_2 + 0x20));
  }
                    /* try { // try from 003524f4 to 003524f7 has its CatchHandler @ 003533a0 */
  uVar9 = FUN_003415f0(param_1[1],*(int *)(param_2 + 0x90) << 2);
  *(undefined8 *)(piVar7 + 0x16) = uVar9;
  if (*(int *)(param_2 + 0x90) < 1) {
    iVar6 = 0;
  }
  else {
    iVar31 = 0;
    iVar6 = 0;
    do {
      while( true ) {
        piVar13 = (int *)FUN_00326ad0(param_2 + 0x90,iVar31);
        iVar3 = *piVar13;
        if ((-1 < iVar3) && (iVar3 < *(int *)(param_2 + 0x20))) break;
                    /* try { // try from 00352528 to 00352557 has its CatchHandler @ 003535f4 */
        FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 0xb0),param_2,10,
                     "Invalid public dependency index.");
LAB_0035253c:
        iVar31 = iVar31 + 1;
        if (*(int *)(param_2 + 0x90) <= iVar31) goto LAB_003526a8;
      }
      *(int *)(*(long *)(piVar7 + 0x16) + (long)iVar6 * 4) = iVar3;
      iVar6 = iVar6 + 1;
      if (*(char *)(*param_1 + 0x29) != '\0') goto LAB_0035253c;
      puVar15 = *(ulong **)(piVar7 + 6);
      if ((puVar15 != (ulong *)0x0) && (local_a8 = piVar7, *puVar15 != 0xffffffffffffffff)) {
        p_Stack_1e0 = (__tree_node_base *)&local_a8;
        local_1e8 = (__tree_node_base *)PTR_LAB_04373ba0;
        local_90 = &local_1e8;
                    /* try { // try from 003525b8 to 003525c7 has its CatchHandler @ 003533c8 */
        std::__call_once(puVar15,&local_90,(_func_void_void_ptr *)PTR_LAB_04373ba8);
      }
      p_Var36 = *(__tree_node_base **)p_Var33;
      if (p_Var36 == (__tree_node_base *)0x0) goto LAB_0035253c;
      uVar11 = *(ulong *)(*(long *)(piVar7 + 0x12) + (long)iVar3 * 8);
      p_Var22 = p_Var36;
      p_Var37 = p_Var33;
      do {
        if (*(ulong *)(p_Var22 + 0x20) >= uVar11) {
          p_Var37 = p_Var22;
        }
        p_Var22 = *(__tree_node_base **)(p_Var22 + (ulong)(*(ulong *)(p_Var22 + 0x20) < uVar11) * 8)
        ;
      } while (p_Var22 != (__tree_node_base *)0x0);
      if ((p_Var37 == p_Var33) || (uVar11 < *(ulong *)(p_Var37 + 0x20))) goto LAB_0035253c;
      plVar14 = *(long **)(p_Var37 + 8);
      if (*(long **)(p_Var37 + 8) == (long *)0x0) {
        p_Var22 = p_Var37 + 0x10;
        plVar24 = *(long **)p_Var22;
        if ((__tree_node_base *)*plVar24 != p_Var37) {
          do {
            lVar8 = *(long *)p_Var22;
            p_Var22 = (__tree_node_base *)(lVar8 + 0x10);
            plVar24 = *(long **)p_Var22;
          } while (*plVar24 != lVar8);
        }
      }
      else {
        do {
          plVar24 = plVar14;
          plVar14 = (long *)*plVar24;
        } while ((long *)*plVar24 != (long *)0x0);
      }
      if ((__tree_node_base *)*plVar12 == p_Var37) {
        *plVar12 = (long)plVar24;
      }
      param_1[0x11] = param_1[0x11] + -1;
      std::__tree_remove<std::__tree_node_base<void*>*>(p_Var36,p_Var37);
      FUN_002e2ea0(PTR_LAB_04373088,p_Var37);
      iVar31 = iVar31 + 1;
    } while (iVar31 < *(int *)(param_2 + 0x90));
  }
LAB_003526a8:
  piVar7[9] = iVar6;
  plVar12 = param_1 + 0xd;
  FUN_0036b4c4(param_1 + 0xc,*plVar12);
  param_1[0xc] = (long)plVar12;
  *plVar12 = 0;
  param_1[0xe] = 0;
  puVar2 = PTR_LAB_04373ba8;
  puVar25 = PTR_LAB_04373ba0;
  if ((*(char *)(*param_1 + 0x29) == '\0') && (0 < piVar7[8])) {
    lVar8 = 0;
    do {
      puVar15 = *(ulong **)(piVar7 + 6);
      if ((puVar15 != (ulong *)0x0) && (local_a8 = piVar7, *puVar15 != 0xffffffffffffffff)) {
        local_1e8 = (__tree_node_base *)puVar25;
                    /* try { // try from 00352728 to 00352743 has its CatchHandler @ 0035358c */
        p_Stack_1e0 = (__tree_node_base *)&local_a8;
        local_90 = &local_1e8;
        std::__call_once(puVar15,&local_90,(_func_void_void_ptr *)puVar2);
      }
      FUN_0034e494(param_1,*(undefined8 *)(*(long *)(piVar7 + 0x12) + lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar8 < piVar7[8]);
  }
                    /* try { // try from 00352760 to 00352763 has its CatchHandler @ 00353538 */
  uVar9 = FUN_003415f0(param_1[1],*(int *)(param_2 + 0xa0) << 2);
  *(undefined8 *)(piVar7 + 0x18) = uVar9;
  if (*(int *)(param_2 + 0xa0) < 1) {
    iVar6 = 0;
  }
  else {
    iVar31 = 0;
    iVar6 = 0;
    do {
      while( true ) {
        piVar13 = (int *)FUN_00326ad0(param_2 + 0xa0,iVar31);
        iVar3 = *piVar13;
        if ((iVar3 < 0) || (*(int *)(param_2 + 0x20) <= iVar3)) break;
        *(int *)(*(long *)(piVar7 + 0x18) + (long)iVar6 * 4) = iVar3;
        iVar6 = iVar6 + 1;
        iVar31 = iVar31 + 1;
        if (*(int *)(param_2 + 0xa0) <= iVar31) goto LAB_003527fc;
      }
                    /* try { // try from 00352794 to 003527c3 has its CatchHandler @ 003535f0 */
      FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 0xb0),param_2,10,
                   "Invalid weak dependency index.");
      iVar31 = iVar31 + 1;
    } while (iVar31 < *(int *)(param_2 + 0xa0));
  }
LAB_003527fc:
  piVar7[10] = iVar6;
  iVar6 = *(int *)(param_2 + 0x38);
  piVar7[0xb] = iVar6;
                    /* try { // try from 00352814 to 00352817 has its CatchHandler @ 00353538 */
  uVar9 = FUN_003415f0(param_1[1],iVar6 * 0x90);
  *(undefined8 *)(piVar7 + 0x1a) = uVar9;
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar8 = 0;
    uVar11 = 0;
    do {
                    /* try { // try from 00352834 to 00352857 has its CatchHandler @ 00353608 */
      uVar9 = FUN_00365e80(param_2 + 0x30,uVar11 & 0xffffffff);
      FUN_0035383c(param_1,uVar9,0,*(long *)(piVar7 + 0x1a) + lVar8);
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0x90;
    } while ((long)uVar11 < (long)*(int *)(param_2 + 0x38));
  }
  iVar6 = *(int *)(param_2 + 0x50);
  piVar7[0xc] = iVar6;
                    /* try { // try from 00352880 to 00352883 has its CatchHandler @ 00353538 */
  uVar9 = FUN_003415f0(param_1[1],iVar6 * 0x50);
  *(undefined8 *)(piVar7 + 0x1c) = uVar9;
  if (0 < *(int *)(param_2 + 0x50)) {
    lVar8 = 0;
    uVar11 = 0;
    do {
                    /* try { // try from 003528a0 to 003528c3 has its CatchHandler @ 00353604 */
      uVar9 = FUN_00365f68(param_2 + 0x48,uVar11 & 0xffffffff);
      FUN_00354ae0(param_1,uVar9,0,*(long *)(piVar7 + 0x1c) + lVar8);
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0x50;
    } while ((long)uVar11 < (long)*(int *)(param_2 + 0x50));
  }
  iVar6 = *(int *)(param_2 + 0x68);
  piVar7[0xd] = iVar6;
                    /* try { // try from 003528ec to 003528ef has its CatchHandler @ 00353538 */
  uVar9 = FUN_003415f0(param_1[1],iVar6 * 0x30);
  *(undefined8 *)(piVar7 + 0x1e) = uVar9;
  if (0 < *(int *)(param_2 + 0x68)) {
    uVar11 = 0;
    do {
                    /* try { // try from 0035290c to 0035292b has its CatchHandler @ 00353600 */
      uVar9 = FUN_00366050(param_2 + 0x60,uVar11 & 0xffffffff);
      FUN_003555ac(param_1,uVar9);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)*(int *)(param_2 + 0x68));
  }
  iVar6 = *(int *)(param_2 + 0x80);
  piVar7[0xe] = iVar6;
                    /* try { // try from 00352954 to 00352957 has its CatchHandler @ 00353538 */
  uVar9 = FUN_003415f0(param_1[1],iVar6 * 0x98);
  *(undefined8 *)(piVar7 + 0x20) = uVar9;
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar8 = 0;
    uVar11 = 0;
    do {
                    /* try { // try from 00352974 to 0035299b has its CatchHandler @ 003535fc */
      uVar9 = FUN_00366138(param_2 + 0x78,uVar11 & 0xffffffff);
      FUN_003578f0(param_1,uVar9,0,*(long *)(piVar7 + 0x20) + lVar8,1);
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0x98;
    } while ((long)uVar11 < (long)*(int *)(param_2 + 0x80));
  }
  piVar7[0x22] = 0;
  piVar7[0x23] = 0;
  if ((*(uint *)(param_2 + 0x10) >> 3 & 1) != 0) {
    puVar25 = *(undefined **)(param_2 + 200);
    if (puVar25 == (undefined *)0x0) {
                    /* try { // try from 003529c4 to 003529db has its CatchHandler @ 00353538 */
      FUN_0030f640(&local_1e8,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x1d1e);
                    /* try { // try from 003529dc to 003529ef has its CatchHandler @ 00353370 */
      uVar9 = FUN_0030f3ac(&local_1e8,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 003529f0 to 003529f7 has its CatchHandler @ 0035336c */
      FUN_0030f41c(&local_90,uVar9);
      FUN_0030f658(&local_1e8);
      puVar25 = *(undefined **)(param_2 + 200);
    }
    puVar2 = PTR_DAT_04373bf0;
    if (puVar25 != (undefined *)0x0) {
      puVar2 = puVar25;
    }
                    /* try { // try from 00352a14 to 00352a2f has its CatchHandler @ 00353538 */
    FUN_00350fa4(param_1,puVar2,piVar7);
  }
  FUN_003557b8(param_1,piVar7,param_2);
  if ((char)param_1[6] == '\0') {
                    /* try { // try from 00352a9c to 00352aa7 has its CatchHandler @ 00353384 */
    FUN_00360228(&local_1e8,param_1);
    lVar8 = param_1[3];
    lVar30 = lVar8;
    if (lVar8 == param_1[4]) {
LAB_00353254:
      param_1[4] = lVar30;
    }
    else {
      pcVar26 = (char *)((ulong)&local_90 | 1);
      lVar30 = 0x58;
      lVar34 = lVar8;
      do {
        lVar35 = lVar30;
        plVar12 = *(long **)(lVar34 + 0x48);
        plVar14 = *(long **)(lVar34 + 0x50);
        p_Stack_1e0 = (__tree_node_base *)lVar34;
                    /* try { // try from 00352b10 to 00352b1b has its CatchHandler @ 003535e0 */
        lVar30 = (**(code **)(*plVar14 + 0x98))(plVar14);
        uVar5 = s_uninterpreted_option_038a0a3a._8_8_;
        uVar9 = s_uninterpreted_option_038a0a3a._0_8_;
        local_90 = (__tree_node_base **)0x28;
        local_88 = 0;
        pcVar26[0x10] = 't';
        pcVar26[0x11] = 'i';
        pcVar26[0x12] = 'o';
        pcVar26[0x13] = 'n';
        *(undefined8 *)(pcVar26 + 8) = uVar5;
        *(undefined8 *)pcVar26 = uVar9;
        local_80 = 0;
                    /* try { // try from 00352b58 to 00352b5f has its CatchHandler @ 0035353c */
        iVar6 = FUN_00364cf4(*(undefined8 *)(*(long *)(lVar30 + 0x10) + 0x90),lVar30,&local_90);
        if (iVar6 == 2) {
          lVar30 = extraout_x1;
          if (*(char *)(extraout_x1 + 0x43) != '\0') {
            lVar30 = 0;
          }
        }
        else {
          lVar30 = 0;
        }
        if (((ulong)local_90 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_80);
        }
        if (lVar30 == 0) {
                    /* try { // try from 00352bac to 00352bc3 has its CatchHandler @ 003535e0 */
          FUN_0030f640(&local_90,3,
                       "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                       ,0x190a);
                    /* try { // try from 00352bc4 to 00352be3 has its CatchHandler @ 00353524 */
          uVar16 = FUN_0030f3ac(&local_90,"CHECK failed: uninterpreted_options_field != nullptr: ");
          uVar16 = FUN_0030f3ac(uVar16,
                                "No field named \"uninterpreted_option\" in the Options proto.");
                    /* try { // try from 00352be4 to 00352beb has its CatchHandler @ 003533f4 */
          FUN_0030f41c(&local_a8,uVar16);
          FUN_0030f658(&local_90);
        }
                    /* try { // try from 00352bfc to 00352c13 has its CatchHandler @ 003535e0 */
        (**(code **)(*plVar14 + 0x98))(plVar14);
        FUN_00383a6c(extraout_x1_00,plVar14,lVar30);
        local_a0 = (int *)0x0;
        local_98 = (int *)0x0;
        local_a8 = (int *)0x0;
        lVar20 = *(long *)(lVar34 + 0x38) - *(long *)(lVar34 + 0x30);
        if (lVar20 == 0) {
          iVar6 = *(int *)(lVar30 + 0x44);
LAB_00352ca0:
          lVar30 = (long)local_a0 - (long)local_a8 >> 2;
          uVar11 = lVar30 + 1;
          if (uVar11 >> 0x3e != 0) {
                    /* try { // try from 00353350 to 00353357 has its CatchHandler @ 00353364 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_98 - (long)local_a8 >> 2) < 0x1fffffffffffffff) {
            uVar28 = (long)local_98 - (long)local_a8 >> 1;
            if (uVar11 <= uVar28) {
              uVar11 = uVar28;
            }
            if (uVar11 != 0) goto LAB_00352ce4;
            lVar20 = 0;
          }
          else {
            uVar11 = 0x3fffffffffffffff;
LAB_00352ce4:
            lVar20 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 2);
          }
          piVar13 = (int *)(lVar20 + lVar30 * 4);
          sVar32 = (long)local_a0 - (long)local_a8;
          piVar23 = (int *)(lVar20 + uVar11 * 4);
          *piVar13 = iVar6;
          piVar38 = (int *)((long)piVar13 - sVar32);
          if (0 < (long)sVar32) {
            memcpy(piVar38,local_a8,sVar32);
          }
          bVar1 = local_a8 != (int *)0x0;
          local_a8 = piVar38;
          local_a0 = piVar13 + 1;
          local_98 = piVar23;
          if (bVar1) {
            FUN_002e2ea0(PTR_LAB_04373088);
          }
        }
        else {
          uVar11 = lVar20 >> 2;
          if (uVar11 >> 0x3e != 0) {
                    /* try { // try from 00353358 to 0035335f has its CatchHandler @ 00353360 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          local_a8 = (int *)FUN_002e2e80(PTR_FUN_04373078);
          local_98 = local_a8 + uVar11;
          sVar32 = *(long *)(lVar34 + 0x38) - (long)*(void **)(lVar34 + 0x30);
          local_a0 = local_a8;
          if (0 < (long)sVar32) {
            memcpy(local_a8,*(void **)(lVar34 + 0x30),sVar32);
            local_a0 = (int *)((long)local_a0 + sVar32);
          }
          iVar6 = *(int *)(lVar30 + 0x44);
          if (local_98 <= local_a0) goto LAB_00352ca0;
          *local_a0 = iVar6;
          local_a0 = local_a0 + 1;
        }
                    /* try { // try from 00352d4c to 00352d57 has its CatchHandler @ 00353550 */
        lVar30 = (**(code **)(*plVar12 + 0x98))(plVar12);
        local_90 = (__tree_node_base **)&DAT_00000028;
        local_88 = 0;
        pcVar26[0x10] = 't';
        pcVar26[0x11] = 'i';
        pcVar26[0x12] = 'o';
        pcVar26[0x13] = 'n';
        *(undefined8 *)(pcVar26 + 8) = uVar5;
        *(undefined8 *)pcVar26 = uVar9;
        local_80 = 0;
                    /* try { // try from 00352d88 to 00352d8f has its CatchHandler @ 00353554 */
        iVar6 = FUN_00364cf4(*(undefined8 *)(*(long *)(lVar30 + 0x10) + 0x90),lVar30,&local_90);
        lVar30 = 0;
        if (((iVar6 != 0) && (iVar6 == 2)) &&
           (lVar30 = extraout_x1_01, *(char *)(extraout_x1_01 + 0x43) != '\0')) {
          lVar30 = 0;
        }
        if (((ulong)local_90 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_80);
        }
        if (lVar30 == 0) {
                    /* try { // try from 00352dcc to 00352de3 has its CatchHandler @ 003533ec */
          FUN_0030f640(&local_90,3,
                       "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                       ,0x1915);
                    /* try { // try from 00352de4 to 00352e03 has its CatchHandler @ 0035350c */
          uVar9 = FUN_0030f3ac(&local_90,
                               "CHECK failed: original_uninterpreted_options_field != nullptr: ");
          uVar9 = FUN_0030f3ac(uVar9,"No field named \"uninterpreted_option\" in the Options proto."
                              );
                    /* try { // try from 00352e04 to 00352e0b has its CatchHandler @ 003533f0 */
          FUN_0030f41c(&local_c0,uVar9);
          FUN_0030f658(&local_90);
        }
                    /* try { // try from 00352e1c to 00352e33 has its CatchHandler @ 00353590 */
        (**(code **)(*plVar12 + 0x98))(plVar12);
        iVar6 = FUN_00386cec(extraout_x1_02,plVar12,lVar30);
        if (0 < iVar6) {
          iVar31 = 0;
          do {
            if (local_a0 == local_98) {
              lVar20 = (long)local_a0 - (long)local_a8 >> 2;
              uVar11 = lVar20 + 1;
              if (uVar11 >> 0x3e != 0) {
                    /* try { // try from 00353348 to 0035334f has its CatchHandler @ 00353368 */
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_98 - (long)local_a8 >> 2) < 0x1fffffffffffffff) {
                uVar28 = (long)local_98 - (long)local_a8 >> 1;
                if (uVar11 <= uVar28) {
                  uVar11 = uVar28;
                }
                if (uVar11 != 0) goto LAB_00352ea4;
                lVar17 = 0;
              }
              else {
                uVar11 = 0x3fffffffffffffff;
LAB_00352ea4:
                lVar17 = FUN_002e2e80(PTR_FUN_04373078,uVar11 << 2);
              }
              piVar13 = (int *)(lVar17 + lVar20 * 4);
              sVar32 = (long)local_a0 - (long)local_a8;
              piVar23 = (int *)(lVar17 + uVar11 * 4);
              piVar38 = (int *)((long)piVar13 - sVar32);
              *piVar13 = iVar31;
              if (0 < (long)sVar32) {
                memcpy(piVar38,local_a8,sVar32);
              }
              bVar1 = local_a8 != (int *)0x0;
              local_a8 = piVar38;
              local_a0 = piVar13 + 1;
              local_98 = piVar23;
              if (bVar1) {
                FUN_002e2ea0(PTR_LAB_04373088);
              }
            }
            else {
              *local_a0 = iVar31;
              local_a0 = local_a0 + 1;
            }
                    /* try { // try from 00352f08 to 00352f3b has its CatchHandler @ 00353614 */
            (**(code **)(*plVar12 + 0x98))(plVar12);
            local_1d8 = (__tree_node_base *)FUN_0038cfc0(extraout_x1_03,plVar12,lVar30,iVar31);
            uVar11 = FUN_0036031c(&local_1e8,plVar14,&local_a8,(long *)(lVar34 + 0x30));
            if ((uVar11 & 1) == 0) {
              p_Stack_1e0 = (__tree_node_base *)0x0;
              local_1d8 = (__tree_node_base *)0x0;
              goto joined_r0x00353138;
            }
            iVar31 = iVar31 + 1;
            local_a0 = local_a0 + -1;
          } while (iVar6 != iVar31);
        }
        p_Stack_1e0 = (__tree_node_base *)0x0;
        local_1d8 = (__tree_node_base *)0x0;
                    /* try { // try from 00352f68 to 00352f6f has its CatchHandler @ 00353508 */
        puVar18 = (undefined8 *)(**(code **)(*plVar14 + 0x18))(plVar14);
                    /* try { // try from 00352f7c to 00352f97 has its CatchHandler @ 00353580 */
        (**(code **)(*plVar14 + 0x98))(plVar14);
        FUN_00383254(extraout_x1_04,puVar18,plVar14);
        local_88 = 0;
        local_80 = 0;
        local_90 = (__tree_node_base **)0x0;
                    /* try { // try from 00352fa0 to 00352fbb has its CatchHandler @ 00353594 */
        uVar11 = FUN_0031ec90(puVar18,&local_90);
        if (((uVar11 & 1) == 0) || (uVar11 = FUN_0031e604(plVar14,&local_90), (uVar11 & 1) == 0)) {
          p_Var33 = local_1e8;
                    /* try { // try from 00352fc4 to 00352fcf has its CatchHandler @ 00353438 */
          FUN_00370b04(local_118,puVar18);
                    /* try { // try from 00352fd0 to 00352fe7 has its CatchHandler @ 003534f8 */
          puVar15 = (ulong *)FUN_002e3e88(local_118,0,
                                          "Some options could not be correctly parsed using the proto descriptors compiled into this binary.\nUnparsed options: "
                                          ,0x74);
          uStack_f8 = puVar15[1];
          local_100 = *puVar15;
          local_f0 = puVar15[2];
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
                    /* try { // try from 00353000 to 00353013 has its CatchHandler @ 00353428 */
          puVar15 = (ulong *)FUN_002e4094(&local_100,"\nParsing attempt:  ",0x13);
          uStack_d8 = puVar15[1];
          local_e0 = *puVar15;
          local_d0 = puVar15[2];
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
                    /* try { // try from 0035302c to 00353037 has its CatchHandler @ 003534a0 */
          FUN_00370b04(local_130,plVar14);
          uVar11 = (ulong)(local_130[0] >> 1);
          uVar28 = (ulong)local_130 | 1;
          if ((local_130[0] & 1) != 0) {
            uVar11 = local_128;
            uVar28 = local_120;
          }
                    /* try { // try from 00353054 to 0035305b has its CatchHandler @ 00353400 */
          puVar15 = (ulong *)FUN_002e4094(&local_e0,uVar28,uVar11);
          uStack_b8 = puVar15[1];
          local_c0 = *puVar15;
          local_b0 = puVar15[2];
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
                    /* try { // try from 00353078 to 0035308b has its CatchHandler @ 00353448 */
          FUN_0034db00(p_Var33,lVar34 + 0x18,plVar12,10,&local_c0);
          if ((local_c0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          }
          if ((local_130[0] & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_120);
          }
          if ((local_e0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_d0);
          }
          if ((local_100 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_f0);
          }
          if ((local_118[0] & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_108);
          }
                    /* try { // try from 003530cc to 003530e3 has its CatchHandler @ 00353594 */
          (**(code **)(*plVar14 + 0x98))(plVar14);
          FUN_00383254(extraout_x1_05,puVar18,plVar14);
        }
        if (((ulong)local_90 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_80);
        }
        if (puVar18 != (undefined8 *)0x0) {
          (**(code **)*puVar18)(puVar18);
          FUN_002e2ea0(PTR_LAB_04373088,puVar18);
        }
joined_r0x00353138:
        if (local_a8 != (int *)0x0) {
          local_a0 = local_a8;
          FUN_002e2ea0(PTR_LAB_04373088);
        }
        puVar25 = PTR_LAB_04373088;
        lVar34 = lVar34 + 0x58;
        lVar30 = lVar35 + 0x58;
      } while (lVar34 != param_1[4]);
      lVar30 = param_1[3];
      if (lVar34 != lVar30) {
        lVar34 = lVar8 + lVar35;
        lVar20 = *(long *)(lVar34 + -0x28);
        while( true ) {
          if (lVar20 != 0) {
            *(long *)(lVar34 + -0x20) = lVar20;
            FUN_002e2ea0(puVar25);
          }
          if ((*(byte *)(lVar34 + -0x40) & 1) == 0) {
            bVar4 = *(byte *)(lVar34 + -0x58);
          }
          else {
            FUN_002e2ea0(puVar25,*(undefined8 *)(lVar34 + -0x30));
            bVar4 = *(byte *)(lVar34 + -0x58);
          }
          if ((bVar4 & 1) != 0) {
            FUN_002e2ea0(puVar25,*(undefined8 *)(lVar34 + -0x48));
          }
          lVar35 = lVar35 + -0x58;
          if (lVar30 - lVar8 == lVar35) break;
          lVar34 = lVar8 + lVar35;
          lVar20 = *(long *)(lVar34 + -0x28);
        }
        goto LAB_00353254;
      }
      param_1[4] = lVar30;
    }
    if (local_238 != 0) {
                    /* try { // try from 00353260 to 00353267 has its CatchHandler @ 00353380 */
      FUN_00355a5c(&local_1e8);
    }
    FUN_0038013c(auStack_1a0);
    FUN_00370110(auStack_1b8,local_1b0);
    FUN_0037009c(auStack_1d0,local_1c8);
    cVar21 = (char)param_1[6];
    if (cVar21 != '\0') {
joined_r0x00353298:
      if (cVar21 != '\0') goto LAB_00352a40;
      goto joined_r0x0035329c;
    }
    if (*(char *)(*param_1 + 0x29) == '\0') {
      FUN_00356204(param_1,piVar7,param_2);
      cVar21 = (char)param_1[6];
      goto joined_r0x00353298;
    }
LAB_003532ec:
                    /* try { // try from 00353300 to 0035333b has its CatchHandler @ 00353538 */
    if (((param_1[0x11] == 0) || (*(char *)(*param_1 + 0x29) != '\0')) ||
       (FUN_00356d14(param_1,param_2), (char)param_1[6] == '\0')) goto LAB_003532a4;
  }
  else {
    cVar21 = '\x01';
LAB_00352a40:
    if (0 < *(int *)(param_2 + 0x38)) {
      lVar8 = 0;
      uVar11 = 0;
      do {
        lVar30 = *(long *)(piVar7 + 0x1a);
                    /* try { // try from 00352a5c to 00352a77 has its CatchHandler @ 003535e8 */
        uVar9 = FUN_00365e80(param_2 + 0x30,uVar11 & 0xffffffff);
        FUN_00356664(param_1,lVar30 + lVar8,uVar9);
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x90;
      } while ((long)uVar11 < (long)*(int *)(param_2 + 0x38));
      cVar21 = (char)param_1[6];
    }
joined_r0x0035329c:
    if (cVar21 == '\0') goto LAB_003532ec;
  }
LAB_003532a0:
  piVar7 = (int *)0x0;
LAB_003532a4:
  FUN_0036b184(&local_160,local_158);
  FUN_0036b9a4(&local_148,local_140);
  return piVar7;
}


