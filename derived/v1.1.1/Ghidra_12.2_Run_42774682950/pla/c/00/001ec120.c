/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ec120; name: FUN_001ec120
 */


undefined8 FUN_001ec120(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar5;
  long lVar4;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (*(long *)(lVar6 + 0x1e8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(lVar6 + 0xa38);
  if (iVar1 == 1 || iVar1 == 6) {
    return 0;
  }
  uVar2 = *(uint *)((long)param_1 + 0x3fc);
  lVar7 = *(long *)(lVar6 + 0x108);
  if ((uVar2 & 0x9000) == 0x1000) {
    if (iVar1 - 3U < 2) {
      plVar5 = (long *)(*(long *)(lVar6 + 0x1e8) + 8);
LAB_001ec1b0:
      lVar4 = *plVar5;
      goto LAB_001ec1b4;
    }
    if ((iVar1 == 2) || (iVar1 == 5)) {
      plVar5 = (long *)(lVar6 + 0x1518);
      goto LAB_001ec1b0;
    }
    *(uint *)((long)param_1 + 0x3fc) = uVar2 & 0xfffeffff;
  }
  else {
    lVar4 = 0;
LAB_001ec1b4:
    *(uint *)((long)param_1 + 0x3fc) = uVar2 & 0xfffeffff;
    if ((lVar4 != -1) && (lVar4 <= lVar7)) goto joined_r0x001ec1cc;
  }
  FUN_001dee08(param_1,2);
  *(undefined8 *)(lVar6 + 0xf0) = 0;
joined_r0x001ec1cc:
  if (lVar7 == 0) {
    return 0;
  }
  uVar3 = FUN_001f954c(param_1);
  return uVar3;
}


