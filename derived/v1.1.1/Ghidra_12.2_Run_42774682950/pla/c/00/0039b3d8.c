/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039b3d8; name: FUN_0039b3d8
 */


void FUN_0039b3d8(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar17;
  int iVar18;
  ulong uVar19;
  byte local_e8 [16];
  undefined8 local_d8;
  byte local_d0 [16];
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  if (param_1 == param_2) {
    FUN_0030f640(&local_b8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/reflection_ops.cc"
                 ,0x48);
                    /* try { // try from 0039b41c to 0039b42f has its CatchHandler @ 0039bc28 */
    uVar5 = FUN_0030f3ac(&local_b8,"CHECK failed: (&from) != (to): ");
                    /* try { // try from 0039b430 to 0039b437 has its CatchHandler @ 0039bc24 */
    FUN_0030f41c(&local_70,uVar5);
    FUN_0030f658(&local_b8);
  }
  lVar6 = (**(code **)(*param_1 + 0x98))(param_1);
  lVar7 = (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar7 != lVar6) {
    FUN_0030f640(&local_b8,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/reflection_ops.cc"
                 ,0x4b);
                    /* try { // try from 0039b484 to 0039b4ef has its CatchHandler @ 0039bc54 */
    uVar5 = FUN_0030f3ac(&local_b8,"CHECK failed: (to->GetDescriptor()) == (descriptor): ");
    uVar5 = FUN_0030f3ac(uVar5,"Tried to merge messages of different types ");
    uVar5 = FUN_0030f3ac(uVar5,"(merge ");
    uVar5 = FUN_0030f3e8(uVar5,*(undefined8 *)(lVar6 + 8));
    uVar5 = FUN_0030f3ac(uVar5,&DAT_03949cc9);
    lVar6 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar5 = FUN_0030f3e8(uVar5,*(undefined8 *)(lVar6 + 8));
    uVar5 = FUN_0030f3ac(uVar5,&DAT_039a0269);
                    /* try { // try from 0039b4f0 to 0039b4f7 has its CatchHandler @ 0039bc2c */
    FUN_0030f41c(&local_70,uVar5);
    FUN_0030f658(&local_b8);
  }
  lVar6 = FUN_0039bcc0(param_1);
  lVar7 = FUN_0039bcc0(param_2);
  lVar8 = FUN_0038e578(lVar6);
  lVar9 = thunk_FUN_00391bac();
  lVar10 = FUN_0038e578(lVar7);
  lVar11 = thunk_FUN_00391bac();
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  local_b8 = (long *)0x0;
                    /* try { // try from 0039b548 to 0039b557 has its CatchHandler @ 0039bc50 */
  FUN_00387324(lVar6,param_1,&local_b8);
  puVar1 = PTR_DAT_04373ab0;
  if (local_b0 == local_b8) {
LAB_0039bbc4:
                    /* try { // try from 0039bbc4 to 0039bbeb has its CatchHandler @ 0039bc50 */
    uVar5 = FUN_00380d6c(lVar7,param_2);
    uVar16 = FUN_00380d50(lVar6,param_1);
    FUN_0030cefc(uVar5,uVar16);
    if (local_b8 != (long *)0x0) {
      local_b0 = local_b8;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    return;
  }
  uVar19 = 0;
  lVar17 = *local_b8;
  if (*(int *)(lVar17 + 0x3c) != 3) goto LAB_0039b94c;
  do {
    if ((lVar8 != lVar9) == (lVar10 == lVar11)) {
LAB_0039b680:
                    /* try { // try from 0039b680 to 0039b68f has its CatchHandler @ 0039bc68 */
      iVar2 = FUN_00386cec(lVar6,param_1,lVar17);
      if (0 < iVar2) {
        iVar18 = 0;
        puVar12 = *(ulong **)(lVar17 + 0x30);
        while( true ) {
          if ((puVar12 != (ulong *)0x0) &&
             (local_88 = lVar17, puStack_80 = PTR_LAB_04373a98, *puVar12 != 0xffffffffffffffff)) {
            local_68 = &local_88;
            local_70 = &puStack_80;
            local_78 = &local_70;
                    /* try { // try from 0039b6f0 to 0039b823 has its CatchHandler @ 0039bc9c */
            std::__call_once(puVar12,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
          switch(*(undefined4 *)(puVar1 + (ulong)*(uint *)(lVar17 + 0x38) * 4)) {
          case 1:
            uVar3 = FUN_00387acc(lVar6,param_1,lVar17,iVar18);
            FUN_00387c60(lVar7,param_2,lVar17,uVar3);
            break;
          case 2:
            uVar5 = FUN_00388264(lVar6,param_1,lVar17,iVar18);
            FUN_003883f8(lVar7,param_2,lVar17,uVar5);
            break;
          case 3:
            uVar3 = FUN_003889fc(lVar6,param_1,lVar17,iVar18);
            FUN_00388b90(lVar7,param_2,lVar17,uVar3);
            break;
          case 4:
            uVar5 = FUN_00389194(lVar6,param_1,lVar17,iVar18);
            FUN_00389328(lVar7,param_2,lVar17,uVar5);
            break;
          case 5:
            FUN_0038a0c4(lVar6,param_1,lVar17,iVar18);
            FUN_0038a258(lVar7,param_2,lVar17);
            break;
          case 6:
                    /* try { // try from 0039b870 to 0039b8db has its CatchHandler @ 0039bc9c */
            FUN_0038992c(lVar6,param_1,lVar17,iVar18);
            FUN_00389ac0(lVar7,param_2,lVar17);
            break;
          case 7:
            uVar4 = FUN_0038a860(lVar6,param_1,lVar17,iVar18);
            FUN_0038aa00(lVar7,param_2,lVar17,uVar4 & 1);
            break;
          case 8:
            uVar5 = FUN_0038bca0(lVar6,param_1,lVar17,iVar18);
            FUN_0038be60(lVar7,param_2,lVar17,uVar5);
            break;
          case 9:
            FUN_0038af6c(local_d0,lVar6,param_1,lVar17,iVar18);
                    /* try { // try from 0039b8dc to 0039b8ef has its CatchHandler @ 0039bc6c */
            FUN_0038b32c(lVar7,param_2,lVar17,local_d0);
            if ((local_d0[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_c0);
            }
            break;
          case 10:
                    /* try { // try from 0039b828 to 0039b86b has its CatchHandler @ 0039bc98 */
            plVar14 = (long *)FUN_0038cfc0(lVar6,param_1,lVar17,iVar18);
            if (lVar6 == lVar7) {
                    /* try { // try from 0039b914 to 0039b947 has its CatchHandler @ 0039bc98 */
              (**(code **)(*plVar14 + 0x98))(plVar14);
              uVar5 = FUN_0038e578(extraout_x1);
              plVar15 = (long *)FUN_0038d598(lVar6,param_2,lVar17,uVar5);
              (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
            }
            else {
              plVar15 = (long *)FUN_0038d598(lVar7,param_2,lVar17,0);
              (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
            }
          }
          iVar18 = iVar18 + 1;
          if (iVar2 == iVar18) break;
          puVar12 = *(ulong **)(lVar17 + 0x30);
        }
      }
    }
    else {
      puVar12 = *(ulong **)(lVar17 + 0x30);
      if ((puVar12 != (ulong *)0x0) &&
         (puStack_80 = PTR_LAB_04373a98, local_88 = lVar17, *puVar12 != 0xffffffffffffffff)) {
        local_68 = &local_88;
        local_70 = &puStack_80;
        local_78 = &local_70;
                    /* try { // try from 0039b61c to 0039b63f has its CatchHandler @ 0039bc94 */
        std::__call_once(puVar12,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      if ((*(int *)(lVar17 + 0x38) != 0xb) || (uVar13 = FUN_00344344(lVar17), (uVar13 & 1) == 0))
      goto LAB_0039b680;
                    /* try { // try from 0039b644 to 0039b653 has its CatchHandler @ 0039bc44 */
      uVar5 = FUN_0038e920(lVar6,param_1,lVar17);
                    /* try { // try from 0039b658 to 0039b67b has its CatchHandler @ 0039bc4c */
      plVar14 = (long *)FUN_0038e870(lVar7,param_2,lVar17);
      uVar13 = FUN_00395ca8();
      if (((uVar13 & 1) == 0) || (uVar13 = FUN_00395ca8(uVar5), (uVar13 & 1) == 0))
      goto LAB_0039b680;
                    /* try { // try from 0039b5ac to 0039b5b7 has its CatchHandler @ 0039bc4c */
      (**(code **)(*plVar14 + 0x40))(plVar14,uVar5);
    }
    while( true ) {
      uVar19 = uVar19 + 1;
      if ((ulong)((long)local_b0 - (long)local_b8 >> 3) <= uVar19) goto LAB_0039bbc4;
      lVar17 = local_b8[uVar19];
      if (*(int *)(lVar17 + 0x3c) == 3) break;
LAB_0039b94c:
      puVar12 = *(ulong **)(lVar17 + 0x30);
      if ((puVar12 != (ulong *)0x0) &&
         (puStack_80 = PTR_LAB_04373a98, local_88 = lVar17, *puVar12 != 0xffffffffffffffff)) {
        local_68 = &local_88;
        local_70 = &puStack_80;
        local_78 = &local_70;
                    /* try { // try from 0039b984 to 0039bb0b has its CatchHandler @ 0039bc94 */
        std::__call_once(puVar12,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      switch(*(undefined4 *)(puVar1 + (ulong)*(uint *)(lVar17 + 0x38) * 4)) {
      case 1:
        uVar3 = FUN_00387768(lVar6,param_1,lVar17);
        FUN_003878f4(lVar7,param_2,lVar17,uVar3);
        break;
      case 2:
        uVar5 = FUN_00387f00(lVar6,param_1,lVar17);
        FUN_0038808c(lVar7,param_2,lVar17,uVar5);
        break;
      case 3:
        uVar3 = FUN_00388698(lVar6,param_1,lVar17);
        FUN_00388824(lVar7,param_2,lVar17,uVar3);
        break;
      case 4:
        uVar5 = FUN_00388e30(lVar6,param_1,lVar17);
        FUN_00388fbc(lVar7,param_2,lVar17,uVar5);
        break;
      case 5:
        FUN_00389d60(lVar6,param_1,lVar17);
        FUN_00389eec(lVar7,param_2,lVar17);
        break;
      case 6:
        FUN_003895c8(lVar6,param_1,lVar17);
        FUN_00389754(lVar7,param_2,lVar17);
        break;
      case 7:
        uVar4 = FUN_0038a4f8(lVar6,param_1,lVar17);
        FUN_0038a684(lVar7,param_2,lVar17,uVar4 & 1);
        break;
      case 8:
        uVar5 = FUN_0038b6f8(lVar6,param_1,lVar17);
        FUN_0038b8c0(lVar7,param_2,lVar17,uVar5);
        break;
      case 9:
        FUN_00384d60(local_e8,lVar6,param_1,lVar17);
                    /* try { // try from 0039bb0c to 0039bb1f has its CatchHandler @ 0039bc30 */
        FUN_00385d54(lVar7,param_2,lVar17,local_e8);
        if ((local_e8[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d8);
        }
        break;
      case 10:
                    /* try { // try from 0039bb3c to 0039bbbf has its CatchHandler @ 0039bc48 */
        plVar14 = (long *)FUN_0038c150(lVar6,param_1,lVar17,0);
        if (lVar6 == lVar7) {
          (**(code **)(*plVar14 + 0x98))(plVar14);
          uVar5 = FUN_0038e578(extraout_x1_00);
          plVar15 = (long *)FUN_0038c3b8(lVar6,param_2,lVar17,uVar5);
          (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
        }
        else {
          plVar15 = (long *)FUN_0038c3b8(lVar7,param_2,lVar17,0);
          (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
        }
      }
    }
  } while( true );
}


