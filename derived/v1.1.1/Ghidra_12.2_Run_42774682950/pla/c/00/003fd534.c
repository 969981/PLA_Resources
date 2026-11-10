/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd534; name: FUN_003fd534
 */


void FUN_003fd534(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [32];
  long local_28;
  
  FUN_002ef750(param_1 + 0x18);
                    /* try { // try from 003fd55c to 003fd573 has its CatchHandler @ 003fd6f0 */
  FUN_002f2c60(auStack_50,param_2);
  lVar2 = FUN_003fd2fc(param_1,auStack_50);
  if (lVar2 == 0) {
                    /* try { // try from 003fd5a0 to 003fd5b7 has its CatchHandler @ 003fd6ec */
    FUN_002f2ff0(auStack_50,param_2);
    lVar2 = FUN_003fd90c(auStack_50,param_3);
    plVar6 = (long *)(param_1 + 0x40);
    lVar3 = *plVar6;
    if (lVar3 == 0) {
      *(long *)(param_1 + 0x40) = lVar2;
      plVar5 = (long *)(param_1 + 0x48);
    }
    else {
      *(long *)(lVar3 + 0x30) = lVar2;
      plVar5 = plVar6;
    }
    *plVar5 = lVar2;
    *(long *)(lVar2 + 0x28) = lVar3;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
                    /* try { // try from 003fd5f4 to 003fd5ff has its CatchHandler @ 003fd6c4 */
    auVar7 = FUN_003fdb80(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),lVar2,
                          lVar2,0);
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar7;
                    /* try { // try from 003fd604 to 003fd60b has its CatchHandler @ 003fd6ec */
    FUN_003fd3d0(param_1);
    uVar4 = *(ulong *)(param_1 + 0x50);
    if (*(ulong *)(param_1 + 0x38) < uVar4) {
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 == 0) {
                    /* try { // try from 003fd698 to 003fd6bf has its CatchHandler @ 003fd6ec */
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl/session_cache/ssl_session_cache.cc"
                     ,0x87,2,"assertion failed: %s","use_order_list_tail_");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(lVar2 + 0x28);
      lVar1 = *(long *)(lVar2 + 0x30);
      if (lVar1 == 0) {
        *plVar6 = lVar3;
      }
      else {
        *(long *)(lVar1 + 0x28) = lVar3;
        lVar3 = *(long *)(lVar2 + 0x28);
      }
      plVar6 = (long *)(param_1 + 0x48);
      if (lVar3 != 0) {
        plVar6 = (long *)(lVar3 + 0x30);
      }
      *plVar6 = lVar1;
      *(ulong *)(param_1 + 0x50) = uVar4 - 1;
                    /* try { // try from 003fd65c to 003fd667 has its CatchHandler @ 003fd6c0 */
      auVar7 = FUN_003fde50(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),lVar2,0)
      ;
      *(undefined1 (*) [16])(param_1 + 0x58) = auVar7;
      FUN_003fd1f0(lVar2);
                    /* try { // try from 003fd674 to 003fd67b has its CatchHandler @ 003fd6ec */
      FUN_003fd3d0(param_1);
    }
  }
  else {
    local_28 = *param_3;
    *param_3 = 0;
                    /* try { // try from 003fd584 to 003fd58b has its CatchHandler @ 003fd6cc */
    FUN_003fd708(lVar2,&local_28);
    lVar2 = local_28;
    local_28 = 0;
    if (lVar2 != 0) {
                    /* try { // try from 003fd598 to 003fd59b has its CatchHandler @ 003fd6c8 */
      FUN_003fef10();
    }
  }
                    /* try { // try from 003fd67c to 003fd683 has its CatchHandler @ 003fd6e8 */
  FUN_002ef790(param_1 + 0x18);
  return;
}


