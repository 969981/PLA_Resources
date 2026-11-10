/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079b470; name: FUN_0079b470
 */


void FUN_0079b470(undefined8 *param_1,long param_2,ulong param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int *local_60;
  long lStack_58;
  ulong local_50;
  undefined1 auStack_28 [8];
  
  lVar3 = *(long *)(param_2 + 0x18);
  if (lVar3 != *(long *)(param_2 + 8)) {
    if (*(long *)(*(long *)(param_2 + 0x20) + lVar3 * 8) == 0) {
      FUN_0030f640(&local_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x2d5);
                    /* try { // try from 0079b4cc to 0079b4df has its CatchHandler @ 0079b6f4 */
      uVar2 = FUN_0030f3ac(&local_60,
                           "CHECK failed: index_of_first_non_null_ == num_buckets_ || table_[index_of_first_non_null_] != nullptr: "
                          );
                    /* try { // try from 0079b4e0 to 0079b4e7 has its CatchHandler @ 0079b6f0 */
      FUN_0030f41c(auStack_28,uVar2);
      FUN_0030f658(&local_60);
      lVar3 = *(long *)(param_2 + 8);
    }
    else {
      lVar3 = *(long *)(param_2 + 8);
    }
  }
  iVar1 = *param_4;
  uVar7 = lVar3 - 1U & *(long *)(param_2 + 0x10) + (long)iVar1;
  lVar3 = *(long *)(param_2 + 0x20);
  piVar5 = *(int **)(lVar3 + uVar7 * 8);
  if (piVar5 != (int *)0x0) {
    if (piVar5 == *(int **)(lVar3 + (uVar7 ^ 1) * 8)) {
      plVar6 = (long *)(*(long *)(lVar3 + (uVar7 & 0x1ffffffffffffffe) * 8) + 8);
      plVar8 = (long *)*plVar6;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar6;
        do {
          if (iVar1 <= *(int *)plVar8[4]) {
            plVar9 = plVar8;
          }
          plVar8 = (long *)plVar8[*(int *)plVar8[4] < iVar1];
        } while (plVar8 != (long *)0x0);
        if ((plVar9 != plVar6) && (piVar5 = (int *)plVar9[4], *piVar5 <= iVar1)) {
LAB_0079b584:
          if (piVar5 != (int *)0x0) {
            FUN_0030f640(&local_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x2db
                        );
                    /* try { // try from 0079b5a0 to 0079b5b3 has its CatchHandler @ 0079b6ec */
            uVar2 = FUN_0030f3ac(&local_60,"CHECK failed: find(*KeyPtrFromNodePtr(node)) == end(): "
                                );
                    /* try { // try from 0079b5b4 to 0079b5bb has its CatchHandler @ 0079b6e8 */
            FUN_0030f41c(auStack_28,uVar2);
            FUN_0030f658(&local_60);
            lVar3 = *(long *)(param_2 + 0x20);
          }
        }
      }
    }
    else {
      do {
        if (*piVar5 == iVar1) goto LAB_0079b584;
        piVar5 = *(int **)(piVar5 + 4);
      } while (piVar5 != (int *)0x0);
    }
  }
  lVar4 = *(long *)(lVar3 + param_3 * 8);
  if (lVar4 == 0) {
    param_4[4] = 0;
    param_4[5] = 0;
    *(int **)(lVar3 + param_3 * 8) = param_4;
    lStack_58 = param_2;
    local_60 = param_4;
    local_50 = param_3;
  }
  else {
    if (lVar4 == *(long *)(lVar3 + (param_3 ^ 1) * 8)) {
      FUN_0079bd44(param_1,param_2,param_3,param_4);
      return;
    }
    uVar7 = FUN_0079ba50(param_2,param_3);
    if ((uVar7 & 1) == 0) {
      lVar3 = *(long *)(param_2 + 0x20);
      *(undefined8 *)(param_4 + 4) = *(undefined8 *)(lVar3 + param_3 * 8);
      *(int **)(lVar3 + param_3 * 8) = param_4;
      param_1[2] = param_3;
      *param_1 = param_4;
      param_1[1] = param_2;
      return;
    }
    FUN_0079bae0(param_2,param_3);
    FUN_0079bd44(&local_60,param_2,param_3,param_4);
    if (local_50 != (param_3 & 0xfffffffffffffffe)) {
      FUN_0030f640(&local_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x2e2);
                    /* try { // try from 0079b6b4 to 0079b6c7 has its CatchHandler @ 0079b6e4 */
      uVar2 = FUN_0030f3ac(&local_60,
                           "CHECK failed: (result.bucket_index_) == (b & ~static_cast<size_type>(1)): "
                          );
                    /* try { // try from 0079b6c8 to 0079b6cf has its CatchHandler @ 0079b6e0 */
      FUN_0030f41c(auStack_28,uVar2);
      FUN_0030f658(&local_60);
    }
  }
  uVar7 = local_50;
  if (*(ulong *)(param_2 + 0x18) <= local_50) {
    uVar7 = *(ulong *)(param_2 + 0x18);
  }
  *(ulong *)(param_2 + 0x18) = uVar7;
  *param_1 = local_60;
  param_1[1] = lStack_58;
  param_1[2] = local_50;
  return;
}


