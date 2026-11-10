/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00361c04; name: FUN_00361c04
 */


undefined8
FUN_00361c04(undefined8 *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
            long *param_6)

{
  uint uVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 uVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int *piVar10;
  undefined *puVar11;
  long lVar12;
  undefined **local_c0;
  undefined **ppuStack_b8;
  ulong local_b0;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  piVar10 = (int *)*param_6;
  uVar7 = param_6[1] - (long)piVar10;
  iVar5 = (int)(uVar7 >> 4);
  if (param_2 == param_3) {
    if (0 < iVar5) {
      lVar9 = 0;
      do {
        if (*piVar10 == *(int *)(param_4 + 0x44)) {
          FUN_0034b2f0(local_88,"Option \"",param_5);
                    /* try { // try from 00361e30 to 00361e43 has its CatchHandler @ 00361f70 */
          puVar3 = (ulong *)FUN_002e4094(local_88,"\" was already set.",0x12);
          ppuStack_b8 = (undefined **)puVar3[1];
          local_c0 = (undefined **)*puVar3;
          local_b0 = puVar3[2];
          puVar3[1] = 0;
          puVar3[2] = 0;
          *puVar3 = 0;
                    /* try { // try from 00361e68 to 00361e73 has its CatchHandler @ 00361f48 */
          FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_c0);
          if (((ulong)local_c0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          }
          if (((byte)local_88[0] & 1) == 0) {
            return 0;
          }
          FUN_002e2ea0(PTR_LAB_04373088,local_78);
          return 0;
        }
        lVar9 = lVar9 + 1;
        piVar10 = piVar10 + 4;
      } while (lVar9 < (long)(uVar7 * 0x10000000) >> 0x20);
    }
  }
  else if (0 < iVar5) {
    lVar12 = 0;
    lVar9 = 0;
    do {
      puVar11 = (undefined *)*param_2;
      if (*(int *)((long)piVar10 + lVar12) == *(int *)(puVar11 + 0x44)) {
        puVar3 = *(ulong **)(puVar11 + 0x30);
        if ((puVar3 != (ulong *)0x0) &&
           (puStack_68 = PTR_LAB_04373a98, local_70 = puVar11, *puVar3 != 0xffffffffffffffff)) {
          ppuStack_b8 = &local_70;
          local_c0 = &puStack_68;
          local_88[0] = (undefined1 *)&local_c0;
          std::__call_once(puVar3,local_88,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
        iVar5 = *(int *)(puVar11 + 0x38);
        if (iVar5 == 10) {
          if ((*(int *)((long)piVar10 + lVar12 + 4) == 4) &&
             (uVar7 = FUN_00361c04(param_1,param_2 + 1,param_3,param_4,param_5,
                                   *(undefined8 *)((long)piVar10 + lVar12 + 8)), (uVar7 & 1) == 0))
          {
            return 0;
          }
        }
        else {
          if (iVar5 != 0xb) {
            FUN_0030f640(&local_c0,3,
                         "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                         ,0x1abf);
                    /* try { // try from 00361ec0 to 00361edb has its CatchHandler @ 00361f84 */
            uVar4 = FUN_0030f3ac(&local_c0,"Invalid wire type for CPPTYPE_MESSAGE: ");
            uVar4 = FUN_0030f52c(uVar4,iVar5);
                    /* try { // try from 00361edc to 00361ee3 has its CatchHandler @ 00361f44 */
            FUN_0030f41c(local_88,uVar4);
            FUN_0030f658(&local_c0);
            return 0;
          }
          if (*(int *)((long)piVar10 + lVar12 + 4) == 3) {
            ppuStack_b8 = (undefined **)0x0;
            local_b0 = 0;
            local_c0 = (undefined **)0x0;
            if (*(int *)((long)piVar10 + lVar12 + 4) != 3) {
                    /* try { // try from 00361f10 to 00361f2f has its CatchHandler @ 00361f30 */
                    /* WARNING: Subroutine does not return */
              __assert_fail("type() == TYPE_LENGTH_DELIMITED",
                            "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/unknown_field_set.h"
                            ,0x166,"length_delimited");
            }
            pbVar6 = *(byte **)((long)piVar10 + lVar12 + 8);
            pbVar8 = *(byte **)(pbVar6 + 0x10);
            bVar2 = (*pbVar6 & 1) == 0;
            if (bVar2) {
              pbVar8 = pbVar6 + 1;
            }
            uVar1 = (uint)(*pbVar6 >> 1);
            if (!bVar2) {
              uVar1 = *(uint *)(pbVar6 + 8);
            }
                    /* try { // try from 00361d38 to 00361d5f has its CatchHandler @ 00361fac */
            uVar7 = FUN_0030dd0c(&local_c0,pbVar8,uVar1);
            if (((uVar7 & 1) == 0) ||
               (uVar7 = FUN_00361c04(param_1,param_2 + 1,param_3,param_4,param_5,&local_c0),
               (uVar7 & 1) != 0)) {
              bVar2 = false;
              if (local_c0 != ppuStack_b8) goto LAB_00361d74;
            }
            else {
              bVar2 = true;
              if (local_c0 != ppuStack_b8) {
LAB_00361d74:
                    /* try { // try from 00361d74 to 00361d7b has its CatchHandler @ 00361f98 */
                FUN_0030cac0(&local_c0);
              }
            }
            if (local_c0 != (undefined **)0x0) {
              ppuStack_b8 = local_c0;
              FUN_002e2ea0(PTR_LAB_04373088);
            }
            if (bVar2) {
              return 0;
            }
          }
        }
      }
      piVar10 = (int *)*param_6;
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar9 < (int)((ulong)(param_6[1] - (long)piVar10) >> 4));
  }
  return 1;
}


