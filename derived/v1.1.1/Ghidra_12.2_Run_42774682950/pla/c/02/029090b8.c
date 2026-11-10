/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029090b8; name: FUN_029090b8
 */


void FUN_029090b8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  uint *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_14;
  
  lVar6 = *param_2;
  if ((lVar6 != 0) && (puVar4 = (uint *)*param_3, 0.0 < (float)puVar4[1])) {
    local_14 = 0;
    if ((*(char *)(lVar6 + 0x228) != '\0') && (*(char *)(lVar6 + 0x22a) != '\0')) {
      for (plVar1 = *(long **)(lVar6 + 0x78); plVar1 != *(long **)(lVar6 + 0x80);
          plVar1 = plVar1 + 1) {
        lVar7 = *plVar1;
        if (*(char *)(lVar7 + 0x12d) != '\0') {
          plVar3 = *(long **)(lVar7 + 0xe0);
          while (plVar3 != *(long **)(lVar7 + 0xe8)) {
            lVar8 = *plVar3;
            plVar3 = plVar3 + 1;
            if ((~*(uint *)(lVar8 + 200) & 3) == 0) {
              local_14 = 0x3f800000;
              goto LAB_0290914c;
            }
          }
        }
      }
    }
LAB_0290914c:
    pcVar5 = *(code **)(PTR_PTR_04387fe0 + (ulong)*puVar4 * 0x10);
    uVar2 = *(ulong *)((long)(PTR_PTR_04387fe0 + (ulong)*puVar4 * 0x10) + 8);
    plVar1 = (long *)((long)puVar4 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(*(undefined4 *)*param_1,plVar1,&local_14);
  }
  return;
}


