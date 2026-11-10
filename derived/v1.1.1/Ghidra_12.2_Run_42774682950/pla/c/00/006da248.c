/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006da248; name: FUN_006da248
 */


void FUN_006da248(long param_1,char *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined *puVar4;
  ulong *puVar5;
  void *pvVar6;
  ulong uVar7;
  ulong local_70;
  size_t local_68;
  void *local_60;
  undefined1 auStack_38 [8];
  
  if (param_2 == (char *)0x0) {
    FUN_0030f640(&local_70,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto\\proto/common/value.pb.h"
                 ,0x3fb);
                    /* try { // try from 006da280 to 006da293 has its CatchHandler @ 006da3e4 */
    uVar2 = FUN_0030f3ac(&local_70,"CHECK failed: value != nullptr: ");
                    /* try { // try from 006da294 to 006da29b has its CatchHandler @ 006da3e0 */
    FUN_0030f41c(auStack_38,uVar2);
    FUN_0030f658(&local_70);
  }
  puVar1 = PTR_DAT_043730c0;
  if (*(int *)(param_1 + 0x1c) != 7) {
    FUN_002de8d8(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 7;
    *(undefined **)(param_1 + 0x10) = puVar1;
  }
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  sVar3 = strlen(param_2);
  if (0xffffffffffffffef < sVar3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar3 < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar3 << 1));
    pvVar6 = (void *)((ulong)&local_70 | 1);
    if (sVar3 == 0) goto LAB_006da340;
  }
  else {
    uVar7 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    local_70 = uVar7 | 1;
    local_68 = sVar3;
    local_60 = pvVar6;
  }
  memcpy(pvVar6,param_2,sVar3);
LAB_006da340:
  *(undefined1 *)((long)pvVar6 + sVar3) = 0;
  puVar5 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    puVar4 = *(undefined **)(param_1 + 0x10);
  }
  else {
    puVar5 = (ulong *)*puVar5;
    puVar4 = *(undefined **)(param_1 + 0x10);
  }
  if (puVar4 == puVar1) {
    FUN_0029175c(param_1 + 0x10,puVar5,&local_70);
  }
  else if ((ulong *)puVar4 != &local_70) {
    sVar3 = local_70 >> 1 & 0x7f;
    pvVar6 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      sVar3 = local_68;
      pvVar6 = local_60;
    }
                    /* try { // try from 006da384 to 006da3d3 has its CatchHandler @ 006da3f8 */
    FUN_00291910(puVar4,pvVar6,sVar3);
  }
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  return;
}


