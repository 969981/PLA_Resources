/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003086d0; name: FUN_003086d0
 */


void FUN_003086d0(long *param_1,undefined2 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint16_t uVar4;
  int *piVar5;
  long lVar6;
  size_t sVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  uint uVar12;
  ulong local_148;
  undefined *local_140;
  ulong local_138;
  char acStack_130 [48];
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  char *local_70;
  undefined *puStack_68;
  ulong local_60;
  undefined *puStack_58;
  
  piVar5 = __errno_location();
  iVar2 = *piVar5;
  if ((param_3 & 1) == 0) {
    cVar3 = *(char *)((long)param_2 + 1);
LAB_00308738:
    pbVar11 = (byte *)((long)param_2 + 1);
    if (cVar3 == '\x1c') {
LAB_00308768:
      pbVar11 = (byte *)((long)param_2 + 1);
      puVar10 = param_2 + 4;
      uVar4 = ntohs(param_2[1]);
      uVar12 = *(uint *)(param_2 + 0xc);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (puVar10 != (undefined2 *)0x0) goto LAB_003087ec;
    }
    else {
      if (cVar3 == '\x02') goto LAB_003087cc;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
LAB_00308860:
    local_148 = (ulong)*pbVar11;
    local_140 = PTR_FUN_043739e8;
                    /* try { // try from 00308870 to 0030888b has its CatchHandler @ 003089b0 */
    FUN_002e6390(&local_70,"(sockaddr family=%d)",0x14,&local_148,1);
  }
  else {
    if (&local_100 == param_2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x2e,2,
                   "assertion failed: %s","resolved_addr != resolved_addr4_out");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    cVar3 = *(char *)((long)param_2 + 1);
    if (cVar3 != '\x1c') goto LAB_00308738;
    if (*(long *)(param_2 + 4) != 0 || *(int *)(param_2 + 8) != -0x10000) goto LAB_00308768;
    pbVar11 = (byte *)((ulong)&local_100 | 1);
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    puVar1 = (undefined4 *)(param_2 + 10);
    puVar10 = param_2 + 1;
    param_2 = &local_100;
    _local_100 = CONCAT44(*puVar1,CONCAT22(*puVar10,0x200));
    local_80 = 0x10;
LAB_003087cc:
    puVar10 = param_2 + 2;
    uVar4 = ntohs(param_2[1]);
    uVar12 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (puVar10 == (undefined2 *)0x0) goto LAB_00308860;
LAB_003087ec:
                    /* try { // try from 003087f0 to 003087ff has its CatchHandler @ 003089b4 */
    lVar6 = FUN_00309b30(*pbVar11,puVar10,acStack_130,0x2e);
    if (lVar6 == 0) goto LAB_00308860;
    if (uVar12 != 0) {
      local_70 = acStack_130;
      puStack_68 = PTR_LAB_043737d8;
      local_60 = (ulong)uVar12;
      puStack_58 = PTR_FUN_043739e0;
                    /* try { // try from 0030882c to 00308847 has its CatchHandler @ 003089ac */
      FUN_002e6390(&local_148,"%s%%25%u",8,&local_70,2);
      if ((local_148 & 1) == 0) {
        uVar8 = (ulong)&local_148 | 1;
        puVar9 = (undefined *)(local_148 >> 1 & 0x7f);
      }
      else {
        if ((long)local_140 < 0) {
                    /* try { // try from 00308970 to 0030898f has its CatchHandler @ 00308990 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        uVar8 = local_138;
        puVar9 = local_140;
      }
                    /* try { // try from 003088f0 to 003088fb has its CatchHandler @ 00308998 */
      FUN_002fe940(&local_70,uVar8,puVar9,uVar4);
      param_1[2] = local_60;
      param_1[1] = (long)puStack_68;
      *param_1 = (long)local_70;
      if ((local_148 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_138);
      }
      goto LAB_0030889c;
    }
    sVar7 = strlen(acStack_130);
    if ((long)sVar7 < 0) {
                    /* try { // try from 00308950 to 0030896f has its CatchHandler @ 00308994 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("false && \"len <= kMaxSize\"",
                    "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
    }
                    /* try { // try from 003088d0 to 003088df has its CatchHandler @ 00308994 */
    FUN_002fe940(&local_70,acStack_130,sVar7,uVar4);
  }
  param_1[2] = local_60;
  param_1[1] = (long)puStack_68;
  *param_1 = (long)local_70;
LAB_0030889c:
                    /* try { // try from 0030889c to 0030889f has its CatchHandler @ 003089b4 */
  piVar5 = __errno_location();
  *piVar5 = iVar2;
  return;
}


