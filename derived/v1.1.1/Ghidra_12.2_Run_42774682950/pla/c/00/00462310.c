/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00462310; name: FUN_00462310
 */


undefined8 FUN_00462310(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x100);
  iVar1 = FUN_00407950(param_2);
  if (iVar1 == 0) {
LAB_0046242c:
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 0x800;
    uVar5 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00407950(param_2);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = (undefined8 *)FUN_00407970(param_2,iVar1);
        iVar2 = FUN_00407f40(puVar3[1]);
        if ((iVar2 == 0x2ea) || (iVar2 = FUN_00407f40(*puVar3), iVar2 == 0x2ea)) goto LAB_0046242c;
        puVar4 = (uint *)FUN_004620c0(plVar6,*puVar3);
        if (puVar4 == (uint *)0x0) {
          if ((uint *)*plVar6 != (uint *)0x0) {
            puVar4 = (uint *)FUN_00462760(0,*puVar3,*(uint *)*plVar6 & 0x10);
            if (puVar4 != (uint *)0x0) {
              *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(*plVar6 + 0x10);
              *puVar4 = *puVar4 | 6;
              iVar2 = FUN_00407800(plVar6[1],puVar4);
              if (iVar2 == 0) {
                FUN_00462700(puVar4);
              }
              else {
                iVar2 = FUN_00407800(*(undefined8 *)(puVar4 + 6),puVar3[1]);
                if (iVar2 != 0) goto LAB_0046240c;
              }
            }
            goto LAB_0046246c;
          }
        }
        else {
          *puVar4 = *puVar4 | 1;
          iVar2 = FUN_00407800(*(undefined8 *)(puVar4 + 6),puVar3[1]);
          if (iVar2 == 0) {
LAB_0046246c:
            uVar5 = 0;
            goto LAB_0046243c;
          }
LAB_0046240c:
          puVar3[1] = 0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_00407950(param_2);
      } while (iVar1 < iVar2);
    }
    uVar5 = 1;
  }
LAB_0046243c:
  FUN_004078c0(param_2,PTR_LAB_04374418);
  return uVar5;
}


