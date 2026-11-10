/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d3088; name: FUN_010d3088
 */


undefined8 FUN_010d3088(long *param_1)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char local_28 [4];
  undefined4 local_24;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_28,1,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar6 = 0;
  *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  if (((uVar4 & 1) != 0) && (local_28[0] == '\x05')) {
    plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
    plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1]);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_24,4,0);
      uVar4 = uVar4 & 0xffffffff;
    }
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1);
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 4;
    if (((uVar4 & 1) == 0) || (cVar1 = FUN_010d31e0(param_1,local_24), cVar1 == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  return uVar6;
}


