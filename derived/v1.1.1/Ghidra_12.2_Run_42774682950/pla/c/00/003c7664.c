/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c7664; name: FUN_003c7664
 */


void FUN_003c7664(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined *local_48;
  
  puVar5 = PTR_DAT_04373140;
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x80))(*(long **)PTR_DAT_04373140,param_1 + 0x18);
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* try { // try from 003c78a8 to 003c78cf has its CatchHandler @ 003c78d4 */
    FUN_002ebea0("external/com_google_grpc_base/src/cpp/client/client_context.cc",0x77,2,
                 "assertion failed: %s","call_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  uVar2 = *param_3;
  lVar7 = param_3[1];
  if (lVar7 != 0) {
    plVar9 = (long *)(lVar7 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(long *)(param_1 + 0x10) = lVar7;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
      plVar9 = *(long **)(param_1 + 0x70);
      goto joined_r0x003c77d4;
    }
  }
  plVar9 = *(long **)(param_1 + 0x70);
joined_r0x003c77d4:
                    /* try { // try from 003c7704 to 003c7707 has its CatchHandler @ 003c78d4 */
  if ((plVar9 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined8 *)(param_1 + 0x38)),
     (uVar6 & 1) == 0)) {
    local_48 = PTR_DAT_04373f98 + 0x10;
    lVar7 = *(long *)(param_1 + 0x170);
    lVar8 = *(long *)(param_1 + 0x178);
    if (lVar8 != lVar7) {
      uVar6 = 0;
      do {
        if ((ulong)(lVar8 - lVar7 >> 3) <= uVar6) {
          (**(code **)(**(long **)puVar5 + 0x10))
                    (*(long **)puVar5,"pos < interceptors_.size()",
                     "external/com_google_grpc_base/include\\grpcpp/impl/codegen/client_interceptor.h"
                     ,0x88);
          lVar7 = *(long *)(param_1 + 0x170);
        }
        plVar9 = *(long **)(lVar7 + uVar6 * 8);
                    /* try { // try from 003c7758 to 003c7793 has its CatchHandler @ 003c78d8 */
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_48);
        lVar7 = *(long *)(param_1 + 0x170);
        lVar8 = *(long *)(param_1 + 0x178);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar8 - lVar7 >> 3));
    }
                    /* try { // try from 003c779c to 003c77b3 has its CatchHandler @ 003c78d4 */
    FUN_003ca4b0(param_2,1,"Failed to set credentials to rpc.",0);
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    local_48 = PTR_DAT_04373f98 + 0x10;
    lVar7 = *(long *)(param_1 + 0x170);
    lVar8 = *(long *)(param_1 + 0x178);
    if (lVar8 != lVar7) {
      uVar6 = 0;
      do {
        if ((ulong)(lVar8 - lVar7 >> 3) <= uVar6) {
          (**(code **)(**(long **)puVar5 + 0x10))
                    (*(long **)puVar5,"pos < interceptors_.size()",
                     "external/com_google_grpc_base/include\\grpcpp/impl/codegen/client_interceptor.h"
                     ,0x88);
          lVar7 = *(long *)(param_1 + 0x170);
        }
        plVar9 = *(long **)(lVar7 + uVar6 * 8);
                    /* try { // try from 003c782c to 003c7867 has its CatchHandler @ 003c78dc */
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_48);
        lVar7 = *(long *)(param_1 + 0x170);
        lVar8 = *(long *)(param_1 + 0x178);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar8 - lVar7 >> 3));
    }
                    /* try { // try from 003c7874 to 003c787b has its CatchHandler @ 003c78d4 */
    FUN_003ca220(*(undefined8 *)(param_1 + 0x38),0);
  }
                    /* try { // try from 003c7888 to 003c788f has its CatchHandler @ 003c78d0 */
  (**(code **)(**(long **)puVar5 + 0x88))(*(long **)puVar5,param_1 + 0x18);
  return;
}


