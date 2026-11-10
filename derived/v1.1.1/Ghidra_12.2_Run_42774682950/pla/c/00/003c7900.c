/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c7900; name: FUN_003c7900
 */


void FUN_003c7900(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_48;
  
  puVar1 = PTR_DAT_04373140;
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x80))(*(long **)PTR_DAT_04373140,param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    local_48 = PTR_DAT_04373f98 + 0x10;
    lVar4 = *(long *)(param_1 + 0x170);
    lVar5 = *(long *)(param_1 + 0x178);
    if (lVar5 != lVar4) {
      uVar6 = 0;
      do {
        if ((ulong)(lVar5 - lVar4 >> 3) <= uVar6) {
          plVar3 = *(long **)puVar1;
          (**(code **)(*plVar3 + 0x10))
                    (plVar3,"pos < interceptors_.size()",
                     "external/com_google_grpc_base/include\\grpcpp/impl/codegen/client_interceptor.h"
                     ,0x88);
          lVar4 = *(long *)(param_1 + 0x170);
        }
        plVar3 = *(long **)(lVar4 + uVar6 * 8);
                    /* try { // try from 003c798c to 003c79c7 has its CatchHandler @ 003c7a1c */
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
        lVar4 = *(long *)(param_1 + 0x170);
        lVar5 = *(long *)(param_1 + 0x178);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
      lVar2 = *(long *)(param_1 + 0x38);
    }
                    /* try { // try from 003c79e0 to 003c79e7 has its CatchHandler @ 003c7a14 */
    FUN_003ca220(lVar2,0);
  }
  plVar3 = *(long **)puVar1;
                    /* try { // try from 003c79f4 to 003c79fb has its CatchHandler @ 003c7a18 */
  (**(code **)(*plVar3 + 0x88))(plVar3,param_1 + 0x18);
  return;
}


