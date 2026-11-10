/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ea15c; name: FUN_029ea15c
 */


void FUN_029ea15c(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68;
  undefined1 local_60;
  long local_58;
  undefined1 auStack_48 [8];
  
  FUN_029846d4(*(undefined8 *)(param_1 + 0x38),*param_3,(char)param_3[1]);
  lVar5 = *param_3;
  lVar6 = *(long *)(param_1 + 0x20);
  lVar4 = param_3[1];
  uVar1 = *(undefined1 *)((long)param_3 + 9);
  *(undefined2 *)(lVar5 + 0x74) = 0;
  uVar2 = *(undefined1 *)(lVar5 + 0x7d);
  FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),4,uVar2,uVar1);
  FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x80,uVar2,0);
  if (*(short *)(lVar5 + 0x74) == 0) {
    *(undefined1 *)(lVar5 + 0x2b0) = uVar1;
    *(char *)(lVar5 + 0x2b1) = (char)lVar4;
    cVar3 = (char)param_3[3];
  }
  else {
    cVar3 = (char)param_3[3];
  }
  if (cVar3 != '\0') {
    local_68 = *param_3;
    local_58 = param_3[2];
    local_60 = 1;
    FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),auStack_48,&local_68);
  }
  return;
}


