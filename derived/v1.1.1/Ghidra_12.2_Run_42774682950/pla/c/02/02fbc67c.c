/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbc67c; name: FUN_02fbc67c
 */


void FUN_02fbc67c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if ((*(long **)(param_1 + 0x50) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x50) + 0x80))(), (uVar1 & 1) != 0)) {
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) | 0x8000;
  }
  lVar3 = *(long *)(param_1 + 0x58);
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = lVar3 + param_1 + 0x58;
  }
  plVar2 = (long *)(lVar4 + 0x50);
  lVar4 = *plVar2;
  uVar6 = *(undefined8 *)((long)plVar2 + lVar4 + 0x88);
  uVar5 = *(undefined8 *)((long)plVar2 + lVar4 + 0x80);
  uVar8 = *(undefined8 *)((long)plVar2 + lVar4 + 0x98);
  uVar7 = *(undefined8 *)((long)plVar2 + lVar4 + 0x90);
  if ((((float)uVar7 < (float)uVar5 && (float)((ulong)uVar7 >> 0x20) < (float)((ulong)uVar5 >> 0x20)
       ) && (float)uVar8 < (float)uVar6) &&
      (float)((ulong)uVar8 >> 0x20) < (float)((ulong)uVar6 >> 0x20)) {
    local_30 = 0x33d6bf9500000000;
    local_28 = 0;
    local_24 = 0;
    FUN_02fbc4d4(param_1,*(undefined8 *)(param_1 + 0x50),&local_30);
  }
  return;
}


