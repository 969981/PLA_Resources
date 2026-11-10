/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00634ea8; name: FUN_00634ea8
 */


void FUN_00634ea8(long *param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long local_60;
  long lStack_58;
  ulong local_50;
  undefined1 auStack_28 [8];
  
  if ((*(long *)(param_2 + 0x18) != *(long *)(param_2 + 8)) &&
     (*(long *)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18) * 8) == 0)) {
    FUN_0030f640(&local_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x2d5);
                    /* try { // try from 00634efc to 00634f0f has its CatchHandler @ 006350a0 */
    uVar1 = FUN_0030f3ac(&local_60,
                         "CHECK failed: index_of_first_non_null_ == num_buckets_ || table_[index_of_first_non_null_] != nullptr: "
                        );
                    /* try { // try from 00634f10 to 00634f17 has its CatchHandler @ 0063509c */
    FUN_0030f41c(auStack_28,uVar1);
    FUN_0030f658(&local_60);
  }
  FUN_006342a8(&local_60,param_2,param_4,0);
  if (local_60 != 0) {
    FUN_0030f640(&local_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x2db);
                    /* try { // try from 00634f54 to 00634f67 has its CatchHandler @ 006350a8 */
    uVar1 = FUN_0030f3ac(&local_60,"CHECK failed: find(*KeyPtrFromNodePtr(node)) == end(): ");
                    /* try { // try from 00634f68 to 00634f6f has its CatchHandler @ 006350a4 */
    FUN_0030f41c(auStack_28,uVar1);
    FUN_0030f658(&local_60);
  }
  lVar4 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(lVar4 + param_3 * 8);
  if (lVar3 == 0) {
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(long *)(lVar4 + param_3 * 8) = param_4;
    lStack_58 = param_2;
    local_60 = param_4;
    local_50 = param_3;
  }
  else {
    if (lVar3 == *(long *)(lVar4 + (param_3 ^ 1) * 8)) {
      FUN_0063561c(param_1,param_2,param_3,param_4);
      return;
    }
    uVar2 = FUN_00635328(param_2,param_3);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_2 + 0x20);
      *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(lVar3 + param_3 * 8);
      *(long *)(lVar3 + param_3 * 8) = param_4;
      param_1[2] = param_3;
      *param_1 = param_4;
      param_1[1] = param_2;
      return;
    }
    FUN_006353b8(param_2,param_3);
    FUN_0063561c(&local_60,param_2,param_3,param_4);
    if (local_50 != (param_3 & 0xfffffffffffffffe)) {
      FUN_0030f640(&local_60,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x2e2);
                    /* try { // try from 00635068 to 0063507b has its CatchHandler @ 00635098 */
      uVar1 = FUN_0030f3ac(&local_60,
                           "CHECK failed: (result.bucket_index_) == (b & ~static_cast<size_type>(1)): "
                          );
                    /* try { // try from 0063507c to 00635083 has its CatchHandler @ 00635094 */
      FUN_0030f41c(auStack_28,uVar1);
      FUN_0030f658(&local_60);
    }
  }
  uVar2 = local_50;
  if (*(ulong *)(param_2 + 0x18) <= local_50) {
    uVar2 = *(ulong *)(param_2 + 0x18);
  }
  *(ulong *)(param_2 + 0x18) = uVar2;
  *param_1 = local_60;
  param_1[1] = lStack_58;
  param_1[2] = local_50;
  return;
}


