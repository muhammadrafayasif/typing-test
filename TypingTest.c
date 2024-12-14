#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

char *paragraphs[] = {
    "The forest stretched endlessly in every direction, its dense canopy of leaves allowing only specks of sunlight to dapple the ground below. The air was thick with the earthy aroma of moss and damp soil, mingling with the faint sweetness of blooming wildflowers. Birds called to one another from the treetops, their songs echoing softly through the stillness, while the distant murmur of a babbling brook hinted at the presence of water nearby. A gentle breeze rustled the leaves, carrying with it a sense of ancient mystery that seemed to breathe life into the towering oaks and slender birches. Every step on the narrow dirt path revealed new wonders: a cluster of vibrant mushrooms sprouting from a fallen log, a squirrel darting through the undergrowth, and the occasional flash of color as a butterfly flitted past. The forest was a living, breathing tapestry of interconnected life, its rhythms as eternal as the cycles of the seasons.",
    
    "The city came alive at dusk, its skyline a jagged silhouette against the fiery hues of the setting sun. Neon signs flickered to life, their vibrant colors casting a kaleidoscope of light onto the bustling streets below. The hum of traffic blended with the chatter of pedestrians, creating a symphony of urban life that resonated through the air. Street vendors lined the sidewalks, their carts overflowing with the tantalizing scents of grilled meats, roasted nuts, and exotic spices. In every direction, life pulsed with an unrelenting energy: couples strolled arm in arm, friends laughed together outside corner cafes, and musicians played soulful melodies that drifted on the evening breeze. The city was a patchwork of contrasts, where modern skyscrapers towered over historic buildings, and the pace of life was as relentless as the ticking of a clock. Yet amidst the chaos, there was an undeniable charm, a sense of belonging that drew people from all walks of life into its vibrant embrace.",
    
    "The vast desert stretched as far as the eye could see, its golden dunes undulating like waves frozen in time. The sun blazed high overhead, casting sharp shadows that danced and shimmered on the shifting sands. In the distance, a mirage wavered, its phantom oasis teasing the weary traveler with promises of shade and water. The air was dry and heavy with the scent of sun-baked earth, broken only by the occasional gust of wind that sent sand skittering across the landscape. A solitary cactus stood sentinel on the horizon, its spiny arms reaching skyward as if in silent defiance of the harsh environment. Despite its apparent desolation, the desert was teeming with life: tiny lizards darted between rocks, camouflaged beetles scurried across the sand, and at night, the sky came alive with stars so numerous they seemed to blanket the heavens. The desert was a place of extremes, its beauty as stark and unforgiving as it was breathtaking and serene.",
    
    "The ocean roared with a primal power, its waves crashing against the rugged cliffs in an endless rhythm that seemed to echo the heartbeat of the earth itself. Seagulls wheeled overhead, their cries carried on the salty breeze that tasted of adventure and freedom. The water shimmered in shades of blue and green, its surface a dance of light and motion that mirrored the ever-changing sky above. On the shore, the sand was cool beneath bare feet, dotted with seashells and seaweed left behind by the retreating tide. Children laughed as they built castles of sand, their imaginations shaping the grains into fortresses and towers destined to be reclaimed by the sea. Farther down the beach, an old fisherman cast his line into the surf, his silhouette framed against the setting sun. The ocean was a reminder of life's vastness, a place where time seemed to stand still even as it surged forward in an eternal cycle of ebb and flow."

    "The library stood as a timeless sanctuary of knowledge, its towering shelves filled with books that whispered stories of the past, present, and imagined futures. The faint scent of aged paper and ink permeated the air, a comforting aroma that spoke of countless hours of thought and creativity. Soft light filtered through tall, arched windows, casting a golden glow on the polished wooden tables and the occasional reader lost in a world of words. The quiet hum of turning pages and the gentle tapping of pens against notebooks created a soothing rhythm that blended with the muffled footsteps of visitors exploring the labyrinth of aisles. Hidden among the stacks were treasures waiting to be discovered—forgotten histories, poetic musings, and the musings of minds that sought to capture the essence of the human experience. The library was more than just a building; it was a living archive, a haven for those seeking solace, inspiration, or simply the joy of getting lost in a good story.",
    
    "The mountain range loomed majestically in the distance, its snow-capped peaks piercing the azure sky like ancient sentinels guarding secrets untold. Below, a tapestry of green valleys and rocky cliffs unfolded, dotted with wildflowers that swayed gently in the crisp mountain breeze. Streams of glacial meltwater meandered through the landscape, their icy currents carving paths through the rugged terrain and feeding into pristine alpine lakes that reflected the heavens like liquid mirrors. The air was alive with the sounds of nature: the call of an eagle soaring high above, the rustle of pine trees in the wind, and the distant rumble of a cascading waterfall. Every step along the winding trail revealed a new perspective, a reminder of the grandeur and resilience of the natural world. The mountains stood as a testament to time itself, their silent presence a reminder of the enduring beauty and power of the earth.",
    
    "The carnival was a whirlwind of color and sound, a sensory explosion that drew visitors into its magical embrace. Strings of lights twinkled like stars overhead, casting a warm glow on the bustling midway where games, food stalls, and attractions vied for attention. The aroma of cotton candy, funnel cakes, and roasted peanuts filled the air, mingling with the laughter of children and the cheerful shouts of barkers enticing passersby to try their luck. A carousel spun gracefully at the center of it all, its painted horses seeming to come alive as they carried riders in endless circles. The Ferris wheel rose above the chaos, offering breathtaking views of the entire fairground and the surrounding landscape. In every corner, performers captivated audiences with feats of daring and skill, from fire-eaters and jugglers to acrobats defying gravity itself. The carnival was a fleeting world of wonder, a place where the ordinary melted away, leaving only the joy of the moment.",
    
    "The small coastal village was a picture of tranquility, its whitewashed cottages nestled between the rugged cliffs and the endless expanse of the sea. Fishing boats bobbed gently in the harbor, their bright colors mirrored in the water, while seagulls wheeled overhead, their cries echoing in the salty air. Narrow cobblestone streets wound through the village, lined with shops offering everything from fresh seafood to handcrafted trinkets. At the heart of the community stood a centuries-old lighthouse, its beam cutting through the evening mist to guide sailors safely home. The rhythm of life here was dictated by the tides and the weather, a harmony between man and nature that seemed untouched by the rush of the modern world. As the sun dipped below the horizon, painting the sky in hues of orange and purple, the village settled into a peaceful hush, the sound of the waves lapping against the shore a lullaby for those who called it home.",
    
    "The jungle was a symphony of life, a dense and vibrant ecosystem that pulsed with energy and mystery. Towering trees stretched toward the heavens, their leafy canopies creating a dappled mosaic of light and shadow on the forest floor. Vines draped like curtains from the branches, and the air was thick with the earthy scent of vegetation and the distant hum of insects. Birds of every color flitted between the trees, their calls a kaleidoscope of sound that mingled with the distant roar of a hidden waterfall. The jungle was a place of contrasts, where beauty and danger coexisted in perfect balance: delicate orchids bloomed alongside thorny bushes, and the stillness of a glade could be interrupted at any moment by the sudden rustle of a predator on the prowl. It was a world teeming with life, where every creature, from the tiniest ant to the mightiest jaguar, played a role in the intricate dance of survival.",
    
    "The storm rolled in with an ominous fury, dark clouds gathering on the horizon like an advancing army. The wind picked up, carrying with it the scent of rain and the distant growl of thunder that grew louder with each passing moment. Trees swayed violently, their branches bending under the force of the gale, while waves crashed against the shore, sending plumes of spray high into the air. The first drops of rain fell like a warning, quickly followed by a torrential downpour that blurred the world into a misty haze. Lightning split the sky with blinding brilliance, illuminating the landscape for brief, electrifying moments before plunging it back into darkness. The storm was a display of nature's raw power, a reminder of the forces that shaped the earth and the fragility of life in its path. And yet, in its aftermath, the world would emerge renewed, the air cleansed, and the land refreshed, a testament to the cycle of destruction and rebirth."
};



int main(){
    // To get the maximum number of characters the terminal can contain in a single line.
    // The point of this is so it can be calculated how many lines above the paragraph starts
    // The ASCII code (\033[F) is called WORDS/LINES times to put the cursor at the start of the paragraph.
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    const int LINES = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    
    int i=0, errors=0;
    
    double time_in_minutes;
    clock_t time_in_seconds;
    
    srand(time(NULL));
    char *s = paragraphs[rand() % (sizeof(paragraphs)/sizeof(paragraphs[0]))+1];
    
    printf("%s",s);
    for (int i=0;i<strlen(s)/LINES;i++) printf("\033[F");

    while (i<strlen(s)){
        char key = getch();
        if (i==0) time_in_seconds=clock(); // Begins the timer when first key is pressed.
        if (key==s[i]) printf("\033[0;32m%c\033[0m",key);
        else {printf("\033[1;31m%c\033[0m",s[i]); errors++;}
        i++;
    
    }

    time_in_seconds=clock()-time_in_seconds;
    time_in_minutes=(((double)time_in_seconds)/CLOCKS_PER_SEC)/60;
    
    printf(
        "\n\nParagraph Length: %d\nTime Taken: %.2f minutes, %.2f seconds\nGross WPM (Words Per Minute): %.2f\nNET WPM (Words Per Minute): %.2f\nTotal Errors: %d\n",
        strlen(s),
        time_in_minutes,
        time_in_minutes * 60,
        (strlen(s)/(5*time_in_minutes)),
        (((strlen(s)/(5*time_in_minutes))-(errors/time_in_minutes))>0) ? (strlen(s)/(5*time_in_minutes))-(errors/time_in_minutes) : 0,
        errors
    );
    printf("\n\nPress any key to continue or press 'q' to exit.\n\n");
    
    if (getch()=='q') return 0;
    else main();
}
