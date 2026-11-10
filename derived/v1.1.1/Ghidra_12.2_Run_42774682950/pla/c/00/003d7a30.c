/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7a30; name: FUN_003d7a30
 */


ulong FUN_003d7a30(long param_1)

{
  ulong uVar1;
  long *in_x4;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_1 + 0x88);
  *(long *)(*in_x4 + 0x88) = lVar8;
  FUN_003d5de0();
  if (lVar8 == 0) {
    return 0;
  }
  plVar6 = (long *)(*in_x4 + 0x90);
  lVar2 = (long)plVar6 + ((ulong)((int)lVar8 * 0x18 + 0xf) & 0xfffffff0);
  plVar3 = (long *)(*in_x4 + 0xa0);
  plVar4 = (long *)(param_1 + 0xa0);
  lVar5 = lVar8;
  do {
    lVar10 = plVar4[1];
    lVar9 = *plVar4;
    *plVar3 = lVar2;
    plVar3[-1] = lVar10;
    plVar3[-2] = lVar9;
    lVar2 = lVar2 + ((ulong)(*(int *)(lVar9 + 0x10) + 0xf) & 0xfffffff0);
    lVar5 = lVar5 + -1;
    plVar3 = plVar3 + 3;
    plVar4 = plVar4 + 2;
  } while (lVar5 != 0);
  uVar7 = 0;
joined_r0x003d7abc:
  if (lVar8 == 0) {
    return uVar7;
  }
  do {
    uVar1 = (**(code **)(*plVar6 + 0x18))(plVar6,in_x4);
    if (uVar1 != 0) {
      if (uVar7 == 0) {
        uVar7 = uVar1;
      }
      else if (4 < uVar1) break;
    }
    lVar8 = lVar8 + -1;
    plVar6 = plVar6 + 3;
    if (lVar8 == 0) {
      return uVar7;
    }
  } while( true );
  FUN_002f0430(uVar1,"external/com_google_grpc_base/src/core/lib/channel/channel_stack.cc",0xb8);
  lVar8 = lVar8 + -1;
  plVar6 = plVar6 + 3;
  goto joined_r0x003d7abc;
}


