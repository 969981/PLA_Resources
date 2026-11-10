/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b3714; name: FUN_007b3714
 */


void FUN_007b3714(undefined8 *param_1,ulong param_2)

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
                    /* try { // try from 007b37b8 to 007b37cb has its CatchHandler @ 007b3870 */
      uVar1 = FUN_0030f3ac(auStack_50,
                           "CHECK failed: m_->index_of_first_non_null_ == m_->num_buckets_ || m_->table_[m_->index_of_first_non_null_] != nullptr: "
                          );
                    /* try { // try from 007b37cc to 007b37d3 has its CatchHandler @ 007b386c */
      FUN_0030f41c(auStack_58,uVar1);
      FUN_0030f658(auStack_50);
      lVar3 = param_1[1];
      uVar2 = *(ulong *)(lVar3 + 8);
      *param_1 = 0;
      param_1[2] = param_2;
      goto joined_r0x007b37f0;
    }
    uVar2 = *(ulong *)(lVar3 + 8);
  }
  *param_1 = 0;
  param_1[2] = param_2;
joined_r0x007b37f0:
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
                    /* try { // try from 007b3824 to 007b3837 has its CatchHandler @ 007b3868 */
          uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: !tree->empty(): ");
                    /* try { // try from 007b3838 to 007b383f has its CatchHandler @ 007b3864 */
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


