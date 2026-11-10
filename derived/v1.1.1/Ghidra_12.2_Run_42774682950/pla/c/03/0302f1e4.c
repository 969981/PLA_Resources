/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302f1e4; name: FUN_0302f1e4
 */


void FUN_0302f1e4(long param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined8 local_50;
  ulong uStack_48;
  
  if (*(long *)(param_1 + 0x698) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x698) + 0x388) + ((long)(param_3 << 0x20) >> 0x1b);
    pcVar3 = (char *)(lVar1 + 0xb);
    *(byte *)(lVar1 + 10) = (byte)param_2 & 3;
    if (*pcVar3 != -1) {
      *pcVar3 = '\0';
    }
  }
  lVar1 = *(long *)(param_1 + 0x150) + (param_3 & 0xffffffff) * 0x80;
  if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
    local_50 = CONCAT44((float)*(double *)(lVar1 + 0x18),(float)*(double *)(lVar1 + 0x10));
    uStack_48 = (ulong)(uint)(float)*(double *)(lVar1 + 0x20);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x4b0) + 0x20))
                      (*(long **)(param_1 + 0x4b0),&local_50);
    *(undefined1 *)(lVar1 + 0x5e) = uVar2;
    FUN_030157ec(param_1 + 0x140,lVar1,param_3 & 0xffffffff);
  }
  FUN_03001990(param_1 + 0x28,param_2);
  FUN_0302f2d4(param_1,param_2);
  return;
}


