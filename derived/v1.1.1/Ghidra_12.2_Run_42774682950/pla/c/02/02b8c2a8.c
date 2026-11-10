/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8c2a8; name: FUN_02b8c2a8
 */


bool FUN_02b8c2a8(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  undefined1 auStack_70 [64];
  
  if (*(char *)(param_2 + 0x2f) != '\0') {
    lVar4 = *(long *)param_1[0xc06];
    if (*(char **)(lVar4 + 0x1d8) == (char *)0x0) {
      nn::vi::OpenDefaultDisplay((Display **)(lVar4 + 0x180));
    }
    else {
      nn::vi::OpenDisplay((Display **)(lVar4 + 0x180),*(char **)(lVar4 + 0x1d8));
    }
    nn::vi::CreateLayer((Layer **)(lVar4 + 0x188),*(Display **)(lVar4 + 0x180));
    nn::vi::GetNativeWindow((void **)(lVar4 + 0x1d0),*(Layer **)(lVar4 + 0x188));
  }
  (*DAT_043f0030)(auStack_70);
  uVar2 = (uint)*(byte *)(param_2 + 0x2d) << 3;
  if (*(char *)(param_2 + 0x2e) != '\0') {
    uVar2 = uVar2 | 0x100;
  }
  (*DAT_043f0038)(auStack_70,uVar2);
  plVar1 = param_1 + 2;
  cVar3 = (*DAT_043f1090)(plVar1,auStack_70);
  if (cVar3 != '\0') {
    FUN_00878570(plVar1,DAT_043f1088);
    FUN_02b8e180(plVar1,DAT_043f1088);
    (*DAT_043f00a8)(plVar1,1);
    (*DAT_043f00b0)(plVar1,1);
    FUN_00876e58(param_1 + 0x602,plVar1);
    (**(code **)(*param_1 + 8))(param_1,param_2);
  }
  return cVar3 != '\0';
}


