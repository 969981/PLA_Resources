/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02837e70; name: FUN_02837e70
 */


void FUN_02837e70(float param_1,long param_2,uint param_3,byte param_4,byte param_5)

{
  ushort uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 200);
  uVar5 = (ulong)param_3;
  if (((param_3 < *(uint *)(lVar6 + 0x278)) &&
      (lVar4 = *(long *)(lVar6 + 600), *(char *)(lVar4 + uVar5 * 0x48 + 8) != '\0')) &&
     (*(char *)(lVar4 + uVar5 * 0x48 + 0xb) == '\0')) {
    plVar2 = *(long **)(lVar4 + uVar5 * 0x48 + 0x10);
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)(lVar4 + uVar5 * 0x48 + 0xb) = 1;
      (**(code **)(*plVar2 + 0x20))(plVar2,1);
      lVar4 = *(long *)(lVar6 + 600);
    }
    *(byte *)(lVar4 + uVar5 * 0x48 + 0xc) = param_5 & 1;
    if ((param_3 < *(uint *)(lVar6 + 0x278)) &&
       (*(char *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 8) != '\0')) {
      FUN_00227728(*(undefined8 *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 0x10));
      *(undefined4 *)(*(long *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 0x10) + 0x20) = 0;
      *(undefined1 *)(lVar6 + 0x671) = 1;
    }
  }
  lVar6 = *(long *)(param_2 + 200);
  uVar3 = *(uint *)(lVar6 + 0x278);
  if ((param_3 < uVar3) && (*(char *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 8) != '\0')) {
    *(byte *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 9) = param_4 & 1;
    lVar6 = *(long *)(param_2 + 200);
    uVar3 = *(uint *)(lVar6 + 0x278);
  }
  if ((param_3 < uVar3) && (*(char *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 8) != '\0')) {
    if (0.0 <= param_1) {
      uVar1 = FUN_00227728(*(undefined8 *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 0x10));
      if ((float)uVar1 < param_1) {
        uVar1 = FUN_00227728(*(undefined8 *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 0x10));
        param_1 = (float)uVar1;
      }
    }
    else {
      param_1 = 0.0;
    }
    *(float *)(*(long *)(*(long *)(lVar6 + 600) + uVar5 * 0x48 + 0x10) + 0x20) = param_1;
    *(undefined1 *)(lVar6 + 0x671) = 1;
  }
  return;
}


