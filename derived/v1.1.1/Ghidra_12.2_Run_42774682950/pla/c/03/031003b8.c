/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031003b8; name: FUN_031003b8
 */


void FUN_031003b8(long *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (0 < param_3) {
    lVar3 = (long)param_2;
    lVar4 = (long)(param_3 + param_2);
    lVar5 = (lVar3 + (long)param_2 * 4) * 8;
    lVar6 = lVar3;
    do {
      lVar6 = lVar6 + 1;
      lVar1 = param_1[3] + lVar5;
      lVar5 = lVar5 + 0x28;
      *(undefined2 *)(lVar1 + 0x24) = 0;
      *(undefined1 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0xffffffff00ffffff;
      *(undefined1 *)(lVar1 + 0x26) = 0;
    } while (lVar6 < lVar4);
    lVar5 = lVar3 * 0x150;
    lVar6 = lVar3;
    do {
      lVar6 = lVar6 + 1;
      puVar2 = (undefined8 *)(param_1[5] + lVar5);
      lVar5 = lVar5 + 0x150;
      *(undefined4 *)((long)puVar2 + 0x14) = 0xff7fffee;
      puVar2[1] = 0x7f7fffee7f7fffee;
      *puVar2 = 0x7f7fffee7f7fffee;
      *(undefined8 *)((long)puVar2 + 0xc) = 0xff7fffeeff7fffee;
      *(undefined1 *)(puVar2 + 3) = 0xff;
    } while (lVar6 < lVar4);
    if (*(char *)(*param_1 + 0x15de) != '\0') {
      lVar6 = lVar3;
      do {
        *(undefined1 *)(param_1[7] + lVar6) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar4);
      lVar5 = lVar3 * 0x28;
      lVar6 = lVar3;
      do {
        lVar6 = lVar6 + 1;
        lVar1 = param_1[0xb] + lVar5;
        lVar5 = lVar5 + 0x28;
        *(undefined2 *)(lVar1 + 0x24) = 0;
        *(undefined1 *)(lVar1 + 0x14) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0xffffffff00ffffff;
        *(undefined1 *)(lVar1 + 0x26) = 0;
      } while (lVar6 < lVar4);
      lVar6 = lVar3 * 0x150;
      do {
        lVar3 = lVar3 + 1;
        puVar2 = (undefined8 *)(param_1[0xd] + lVar6);
        lVar6 = lVar6 + 0x150;
        *(undefined4 *)((long)puVar2 + 0x14) = 0xff7fffee;
        puVar2[1] = 0x7f7fffee7f7fffee;
        *puVar2 = 0x7f7fffee7f7fffee;
        *(undefined8 *)((long)puVar2 + 0xc) = 0xff7fffeeff7fffee;
        *(undefined1 *)(puVar2 + 3) = 0xff;
      } while (lVar3 < lVar4);
    }
  }
  return;
}


