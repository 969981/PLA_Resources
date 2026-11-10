/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fb924; name: FUN_006fb924
 */


void FUN_006fb924(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  lVar3 = param_1[1];
  uVar2 = *(ulong *)(lVar3 + 0x18);
  if (uVar2 != *(ulong *)(lVar3 + 8)) {
    if (*(long *)(*(long *)(lVar3 + 0x20) + uVar2 * 8) == 0) {
      FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x1d4);
                    /* try { // try from 006fb9c8 to 006fb9db has its CatchHandler @ 006fba80 */
      uVar1 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != nullptr: "
                          );
                    /* try { // try from 006fb9dc to 006fb9e3 has its CatchHandler @ 006fba7c */
      FUN_0030f41c(auStack_58,uVar1);
      FUN_0030f658(auStack_50);
      lVar3 = param_1[1];
      uVar2 = *(ulong *)(lVar3 + 8);
      *param_1 = 0;
      param_1[2] = param_2;
      goto joined_r0x006fba00;
    }
    uVar2 = *(ulong *)(lVar3 + 8);
  }
  *param_1 = 0;
  param_1[2] = param_2;
joined_r0x006fba00:
  if (param_2 < uVar2) {
    lVar3 = *(long *)(lVar3 + 0x20);
    do {
      plVar4 = *(long **)(lVar3 + param_2 * 8);
      if (plVar4 != (long *)0x0) {
        if (plVar4 != *(long **)(lVar3 + (param_2 ^ 1) * 8)) {
          *param_1 = plVar4;
          return;
        }
        if (plVar4[3] == 0) {
          FUN_0030f640(auStack_50,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x1dd)
          ;
                    /* try { // try from 006fba34 to 006fba47 has its CatchHandler @ 006fba78 */
          uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: !tree->empty(): ");
                    /* try { // try from 006fba48 to 006fba4f has its CatchHandler @ 006fba74 */
          FUN_0030f41c(auStack_58,uVar1);
          FUN_0030f658(auStack_50);
        }
        *param_1 = *(undefined8 *)(*plVar4 + 0x20);
        return;
      }
      param_2 = param_2 + 1;
      param_1[2] = param_2;
    } while (param_2 < uVar2);
  }
  return;
}


