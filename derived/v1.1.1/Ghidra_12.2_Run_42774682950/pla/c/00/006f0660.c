/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f0660; name: FUN_006f0660
 */


void FUN_006f0660(long param_1,char *param_2)

{
  undefined8 uVar1;
  size_t sVar2;
  ulong *puVar3;
  ulong *puVar4;
  void *pvVar5;
  ulong uVar6;
  undefined1 auStack_68 [8];
  ulong local_60;
  size_t local_58;
  void *local_50;
  
  if (param_2 == (char *)0x0) {
    FUN_0030f640(&local_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto\\proto/matchmaking/v1/matchmaker.pb.h"
                 ,0x4f9);
                    /* try { // try from 006f0694 to 006f06a7 has its CatchHandler @ 006f07cc */
    uVar1 = FUN_0030f3ac(&local_60,"CHECK failed: value != nullptr: ");
                    /* try { // try from 006f06a8 to 006f06af has its CatchHandler @ 006f07c8 */
    FUN_0030f41c(auStack_68,uVar1);
    FUN_0030f658(&local_60);
  }
  local_58 = 0;
  local_50 = (void *)0x0;
  local_60 = 0;
  sVar2 = strlen(param_2);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_60 | 1);
    if (sVar2 == 0) goto LAB_006f072c;
  }
  else {
    uVar6 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_60 = uVar6 | 1;
    local_58 = sVar2;
    local_50 = pvVar5;
  }
  memcpy(pvVar5,param_2,sVar2);
LAB_006f072c:
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  puVar3 = *(ulong **)(param_1 + 0x10);
  if (puVar3 == (ulong *)PTR_DAT_043730c0) {
    FUN_0029175c((ulong *)(param_1 + 0x10),puVar4,&local_60);
  }
  else if (puVar3 != &local_60) {
    sVar2 = local_60 >> 1 & 0x7f;
    pvVar5 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      sVar2 = local_58;
      pvVar5 = local_50;
    }
                    /* try { // try from 006f0778 to 006f07b3 has its CatchHandler @ 006f07e0 */
    FUN_00291910(puVar3,pvVar5,sVar2);
  }
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  return;
}


