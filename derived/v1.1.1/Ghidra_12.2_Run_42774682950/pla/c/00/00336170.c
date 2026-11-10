/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00336170; name: FUN_00336170
 */


undefined8 FUN_00336170(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (0x100 < *(ushort *)(param_1 + 8)) {
    plVar4 = *(undefined8 **)(param_1 + 0x10) + 1;
    plVar6 = (long *)**(undefined8 **)(param_1 + 0x10);
    if (plVar6 == plVar4) {
      return 1;
    }
    do {
      uVar1 = FUN_00336298(plVar6 + 5);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      plVar2 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar2 = plVar6 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar6) {
          do {
            lVar5 = *plVar2;
            plVar2 = (long *)(lVar5 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar5);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      plVar6 = plVar3;
    } while (plVar3 != plVar4);
    return 1;
  }
  if (*(short *)(param_1 + 10) != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    do {
      uVar1 = FUN_00336298(lVar5 + 8);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (0x100 < *(ushort *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("!is_large()",
                      "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/extension_set.h"
                      ,0x33e,"flat_end");
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != *(long *)(param_1 + 0x10) + (ulong)*(ushort *)(param_1 + 10) * 0x20);
  }
  return 1;
}


