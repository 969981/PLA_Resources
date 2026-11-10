/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032be1a4; name: FUN_032be1a4
 */


void FUN_032be1a4(long *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = tpidr_el0;
  lVar3 = *(long *)(lVar5 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar3;
    lVar6 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x10);
  }
  if (lVar6 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    puVar1 = *(undefined8 **)(lVar6 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar6 + 0x10)) &&
       (*(ulong *)(lVar6 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "MiIn use (KiB)";
      *(float *)(puVar1 + 1) = (float)iVar2 * 0.0009765625;
    }
    lVar3 = *(long *)(lVar5 + 0x38d490);
  }
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar3;
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  if (lVar5 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    puVar1 = *(undefined8 **)(lVar5 + 8);
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar5 + 0x10)) &&
       (*(ulong *)(lVar5 + 8) = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "MiPeak (KiB)";
      *(float *)(puVar1 + 1) = (float)iVar2 * 0.0009765625;
    }
  }
  return;
}


