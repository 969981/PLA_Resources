/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0299dd64; name: FUN_0299dd64
 */


void FUN_0299dd64(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  char local_28 [8];
  
  bVar1 = FUN_02954420(param_2,0,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xe);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 8);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_28[uVar2]) goto LAB_0299ddc4;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xe) + 1;
      *(byte *)(param_1 + 0xe) = bVar3;
LAB_0299ddc4:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_02954420(param_2,1,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xe);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 8);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_28[uVar2]) goto LAB_0299de4c;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xe) + 1;
      *(byte *)(param_1 + 0xe) = bVar3;
LAB_0299de4c:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_02954420(param_2,2,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xe);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 8);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_28[uVar2]) goto LAB_0299ded4;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xe) + 1;
      *(byte *)(param_1 + 0xe) = bVar3;
LAB_0299ded4:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_02954420(param_2,3,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xe);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 8);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_28[uVar2]) goto LAB_0299df5c;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xe) + 1;
      *(byte *)(param_1 + 0xe) = bVar3;
LAB_0299df5c:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  bVar1 = FUN_02954420(param_2,4,local_28);
  if (bVar1 != 0) {
    bVar3 = *(byte *)(param_1 + 0xe);
    uVar2 = 0;
    do {
      if (bVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)bVar3;
        pcVar5 = (char *)(param_1 + 8);
        uVar6 = uVar4;
        do {
          if (*pcVar5 == local_28[uVar2]) goto LAB_0299dfe4;
          uVar6 = uVar6 - 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar6 != 0);
      }
      *(char *)(param_1 + uVar4 + 8) = local_28[uVar2];
      bVar3 = *(char *)(param_1 + 0xe) + 1;
      *(byte *)(param_1 + 0xe) = bVar3;
LAB_0299dfe4:
      uVar2 = uVar2 + 1;
    } while (uVar2 != bVar1);
  }
  return;
}


