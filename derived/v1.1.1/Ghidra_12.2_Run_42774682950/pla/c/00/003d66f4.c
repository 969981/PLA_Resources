/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d66f4; name: FUN_003d66f4
 */


void FUN_003d66f4(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  char *local_50;
  undefined4 local_48;
  
  uVar2 = *param_1;
  if (uVar2 < 2) {
    FUN_003d7088(param_2,"external/com_google_grpc_base\\src/core/lib/iomgr/call_combiner.h",0xa6,
                 "no closures to schedule");
    return;
  }
  if (uVar2 < 4) {
    uVar3 = uVar2 >> 1;
  }
  else {
    lVar5 = 0;
    uVar6 = 1;
    do {
      puVar4 = param_1 + 1;
      if ((uVar2 & 1) != 0) {
        puVar4 = (ulong *)param_1[1];
      }
      FUN_003d6e50(param_2,*(undefined8 *)((long)puVar4 + lVar5 + 0x18),
                   *(undefined8 *)((long)puVar4 + lVar5 + 0x20),
                   "external/com_google_grpc_base\\src/core/lib/iomgr/call_combiner.h",0xac,
                   *(undefined8 *)((long)puVar4 + lVar5 + 0x28));
      uVar2 = *param_1;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
      uVar3 = uVar2 >> 1;
    } while (uVar6 < uVar3);
  }
  if (PTR_DAT_04374090[0x10] != '\0') {
    if (uVar3 == 0) goto LAB_003d68d8;
    if ((uVar2 & 1) == 0) {
      puVar4 = param_1 + 1;
    }
    else {
      puVar4 = (ulong *)param_1[1];
    }
    uVar2 = *puVar4;
    uVar1 = FUN_002f1480(puVar4[1]);
    if (*param_1 < 2) goto LAB_003d68d8;
    if ((*param_1 & 1) == 0) {
      puVar4 = param_1 + 1;
    }
    else {
      puVar4 = (ulong *)param_1[1];
    }
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/call_combiner.h",0xaf,1,
                 "CallCombinerClosureList executing closure while already holding call_combiner %p: closure=%p error=%s reason=%s"
                 ,param_2,uVar2,uVar1,puVar4[2]);
    uVar2 = *param_1;
  }
  local_50 = "external/com_google_grpc_base\\src/core/lib/iomgr/call_combiner.h";
  local_48 = 0xb6;
  if (uVar2 < 2) {
LAB_003d68d8:
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                  "operator[]");
  }
  if ((uVar2 & 1) == 0) {
    puVar4 = param_1 + 1;
  }
  else {
    puVar4 = (ulong *)param_1[1];
  }
  FUN_002f019c(&local_50,*puVar4,puVar4[1]);
  if ((*param_1 & 1) == 0) {
    puVar4 = param_1 + 1;
LAB_003d681c:
    memset(puVar4,0xab,(*param_1 >> 1) * 0x18);
    if ((*param_1 & 1) == 0) goto LAB_003d6850;
    uVar2 = param_1[1];
  }
  else {
    puVar4 = (ulong *)param_1[1];
    uVar2 = 0;
    if (puVar4 != (ulong *)0x0) goto LAB_003d681c;
  }
  FUN_002e2ea0(PTR_LAB_04373088,uVar2);
LAB_003d6850:
  *param_1 = 0;
  return;
}


