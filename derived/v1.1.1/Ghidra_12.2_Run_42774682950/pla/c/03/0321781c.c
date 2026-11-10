/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0321781c; name: FUN_0321781c
 */


undefined8 FUN_0321781c(long param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = tpidr_el0;
  if (*(long *)(lVar11 + 0x38d490) == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar7;
    lVar11 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar11 + 0x38d490) + 0x10);
  }
  if (lVar11 != 0) {
    puVar1 = *(undefined8 **)(lVar11 + 8);
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtisProcessingNeeded";
      uVar10 = nn::os::GetSystemTick();
      puVar1[1] = uVar10;
    }
  }
  if (*param_2 == '\0') {
LAB_032178d4:
    if (((*param_2 != '\0') || (param_2[0x24] == '\0')) ||
       (uVar6 = FUN_0331fc10(&DAT_042f2df0,"Not implemented"), (uVar6 & 1) == 0)) goto LAB_032178e0;
    CallSupervisor(0x26);
    cVar3 = param_2[0x48];
joined_r0x03217a0c:
    if ((cVar3 != '\0') && (uVar5 = *(uint *)(param_2 + 0x54), uVar5 != 0)) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x250) + 0x20);
      if (0 < iVar2) {
        lVar7 = 0;
        do {
          if ((((uVar5 & 1) != 0) &&
              (lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x250) + 0x18) + lVar7 * 8),
              lVar8 != 0)) &&
             ((*(int *)(lVar8 + 0x28) != 0 ||
              (((*(int *)(lVar8 + 0x38) != 0 || (*(int *)(lVar8 + 0x48) != 0)) ||
               (*(int *)(lVar8 + 0x58) != 0)))))) goto LAB_032179d4;
          lVar7 = lVar7 + 1;
        } while ((lVar7 < iVar2) && (uVar5 = uVar5 >> 1, uVar5 != 0));
      }
    }
    if ((param_2[0x58] == '\0') ||
       ((*(int *)(*(long *)(param_1 + 0x438) + 0x28) == 0 &&
        (*(int *)(*(long *)(param_1 + 0x478) + 0x28) == 0)))) {
      uVar10 = 0;
      goto joined_r0x03217958;
    }
  }
  else if (*(int *)(**(long **)(param_1 + 0x4e0) + 8) +
           *(int *)((long)*(long **)(param_1 + 0x4e0) + 0x1c) < 1) {
    lVar7 = *(long *)(param_1 + 0x170);
    if (lVar7 != 0) {
      if (*(char *)(lVar7 + 0xc4) != '\0') goto LAB_032179d4;
      if (*(int *)(lVar7 + 0x98) != 0) {
        lVar8 = (long)*(int *)(lVar7 + 0x98) * 0xd0;
        pcVar9 = (char *)(*(long *)(lVar7 + 0x90) + 200);
        do {
          if ((*(int *)(pcVar9 + -8) != 0) && (*pcVar9 != '\0')) goto LAB_032179d4;
          lVar8 = lVar8 + -0xd0;
          pcVar9 = pcVar9 + 0xd0;
        } while (lVar8 != 0);
        goto LAB_032178d4;
      }
    }
LAB_032178e0:
    cVar3 = param_2[0x48];
    goto joined_r0x03217a0c;
  }
LAB_032179d4:
  uVar10 = 1;
joined_r0x03217958:
  if (lVar11 != 0) {
    puVar1 = *(undefined8 **)(lVar11 + 8);
    uVar6 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar6 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar6, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar4 = nn::os::GetSystemTick();
      puVar1[1] = uVar4;
    }
  }
  return uVar10;
}


